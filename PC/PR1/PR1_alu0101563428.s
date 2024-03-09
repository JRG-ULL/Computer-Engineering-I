# PR1. PRINCIPIOS DE COMPUTADORES.
# Autor: Javier Rodríguez González (alu0101563428@ull.edu.es)
# Fecha última modificación: 28 Feb. 2024 

# CÓDIGO EN C++
# ________________________________
#
# #include <iomanip>
# #include <iostream>
#
# int main() {
#   std::cout << "PR1: Principios de computadores." << std::endl;
#   double error;
#   // Bucle do-while hasta que se introduzca un error válido.
#   do {
#     std::cout << "\nIntroduzca el máximo error permitido: ";
#     std::cin >> error;
#     if (error < 0.00001 || error >= 1) {
#       std::cout
#           << "\nERROR: El error introducido debe cumplir 0.00001 <= error < 1"
#           << std::endl;
#     } else {
#       break;
#     }
#   } while (true);
#   double e_number = 1.0;   	// Iniciamos el número e en 1 (1/0!).
#   double den = 1.0;          	// Iniciamos el denominador en 1 (0!).
#   double last_term;  		// Valor del último término de la suma (1/n!).
#   double terms = 1.0;  	// Número de términos empleados en la aproximación.
#   while (last_term >= error) {
#     den *= terms;
#     last_term = 1 / den;
#     e_number += last_term;
#     ++terms;
#   }
#   std::cout << "\nNúmero e (aproximado): " << std::fixed
#             << std::setprecision(16) << e_number << std::endl;
#   std::cout << "Número de términos empleados: " << int(terms) << std::endl;
#   std::cout << "PR1: Fin del programa." << std::endl;
#   return 0;
# }

# TABLA DE REGISTROS
# ________________________________
#
# aux. condicional 1	= $f16 (0.00001)
# aux. condicional 2	= $f18 (1.0)
# double error		= $f20
# double e_number	= $f22
# double den		= $f6
# double last_term	= $f8
# double terms		= $f24

	.data

titulo:		.asciiz "\nPR1: Principio de computadores.\n"
pet:		.asciiz "\nIntroduzca maximo error permitido: "
caderr:		.asciiz "\nError: el dato introducido debe cumplir 0.00001 <= dato < 1\n"
cade:		.asciiz "\nNumero e: "
cadnt:		.asciiz "\nNumero de terminos: "
cadfin:		.asciiz "\nPR1: Fin del programa.\n"

	.text

main:
	# Introducción al programa:
	# int main() {
	# std::cout << "PR1: Principios de computadores." << std::endl;
	li 	$v0, 4
	la 	$a0, titulo
	syscall

	# Bucle do-while para la introducción del error:
	# double error;
	# do {
dowhile:
	# std::cout << "\nIntroduzca el máximo error permitido: ";
	li 	$v0, 4
	la 	$a0, pet
	syscall

	# std::cin >> error;
	li 	$v0, 7
	syscall
	# Guardamos el error en un registro salvado de doble precisión:
	mov.d 	$f20, $f0

	# Dividimos 'if (error < 0.00001 || error >= 1)' en dos partes:
	# [1] if (error < 0.00001) {
	li.d 	$f16, 0.00001
	c.lt.d 	$f20, $f16
	bc1t 	error		# Si error < 0.00001, mostramos un mensaje de error.
	# [2] if (error >= 1) {
	li.d 	$f18, 1.0
	c.le.d 	$f18, $f20
	bc1f 	dowhile_break	# Si error < 1, salimos del bucle do-while (break;).
	
error:
	# std::cout << "\nERROR: El error introducido debe cumplir 0.00001 <= error < 1" << std::endl;
	# }
	li 	$v0, 4
	la 	$a0, caderr
	syscall

	j 	dowhile
	# } while (true);

dowhile_break:
	# double e_number = 1.0;
	li.d 	$f22, 1.0
	# double den = 1.0;
	li.d	$f6, 1.0
	# double last_term;
	li.d	$f8, 1.0
	# double terms = 1.0;
	li.d	$f24, 1.0

calculo_e:
	# while (last_term >= error) {
	# den *= terms;
	mul.d	$f6, $f6, $f24
	# last_term = 1 / den;
	div.d	$f8, $f18, $f6	# Al no haber llamadas al sistema de por medio, volvemos a hacer uso del registro temporal $f18 (= 1.0)
	# e_number += last_term;
	add.d	$f22, $f22, $f8
	# ++terms;
	add.d	$f24, $f24, $f18

	c.le.d	$f20, $f8
	bc1t 	calculo_e
	# }

	# std::cout << "\nNúmero e (aproximado): "
	li 	$v0, 4
	la 	$a0, cade
	syscall
	# << std::fixed << std::setprecision(16) << e_number << std::endl;
	li	$v0, 3
	mov.d	$f12, $f22
	syscall

	# std::cout << "Número de términos empleados: "
	li 	$v0, 4
	la 	$a0, cadnt
	syscall
	# << int(terms) << std::endl;
	li	$v0, 3
	mov.d	$f12, $f24
	syscall

	# std::cout << "PR1: Fin del programa." << std::endl;
	li 	$v0, 4
	la 	$a0, cadfin
	syscall

	# return 0;
	# }
	li 	$v0, 10
	syscall