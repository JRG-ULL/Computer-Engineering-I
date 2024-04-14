# AUTOR: Rodríguez González, Javier 
# E-MAIL: alu0101563428@ull.edu.es
# FECHA ÚLTIMA MODIFICACIÓN: 14 abr. 2024

# ÚLTIMAS MODIFICACIONES
# ---------------------
# - Añadidos comentarios aclarativos sobre las funciones.
# - Solucionado error de carga de valores encontrado en la función 'intercambia'.

# CÓDIGO EN C++
# ---------------------
# #include <cmath>
# #include <iomanip>
# #include <iostream>
# #include <tuple>
#
# typedef struct {
#   int nFil;
#   int nCol;
#   float elementos[];
# } structMat;
#
# structMat mat1{
#     6, 6, {11.11, 12.12, 13.13, 14.14, 15.15, 16.16, 21.21, 22.22, 23.23,
#            24.24, 25.25, 26.26, 31.31, 32.32, 33.33, 34.34, 35.35, 36.36,
#            41.41, 42.42, 43.43, 44.44, 45.45, 46.46, 51.51, 52.52, 53.53,
#            54.54, 55.55, 56.56, 61.61, 62.62, 63.63, 64.64, 65.65, 66.66}};
#
# structMat mat2{
#     7, 10, {-36.886, -58.201, 78.671,  19.092,  -50.781, 33.961,  -59.511,
#             12.347,  57.306,  -1.938,  -86.858, -81.852, 54.623,  -22.574,
#             88.217,  64.374,  52.312,  47.918,  -83.549, 19.041,  4.255,
#             -36.842, 82.526,  27.394,  56.527,  39.448,  18.429,  97.057,
#             76.933,  14.583,  67.79,   -9.861,  -96.191, 32.369,  -18.494,
#             -43.392, 39.857,  80.686,  -36.87,  -17.786, 30.073,  89.938,
#             -6.889,  64.601,  -85.018, 70.559,  -48.853, -62.627, -60.147,
#             -5.524,  84.323,  -51.718, 93.127,  -10.757, 32.119,  98.214,
#             69.471,  73.814,  3.724,   57.208,  -41.528, -17.458, -64.226,
#             -71.297, -98.745, 7.095,   -79.112, 33.819,  63.531,  -96.181}};
#
# structMat mat3{
#     1, 8, {-36.52, 35.3, 79.05, -58.69, -55.23, -19.44, -88.63, -93.61}};
#
# structMat mat4{16,
#                1,
#                {-90.57, -65.11, -58.21, -73.23, -89.38, -79.25, 16.82, 66.3,
#                 -96.14, -97.16, -24.66, 5.27, -33.5, -13.09, 27.13, -74.83}};
#
# structMat mat5{1, 1, {78.98}};
#
# structMat mat6{0, 0, {0}};
#
# float infinito = INFINITY;
#
# void print_mat(structMat* mat) {
#   int nFil = mat->nFil;
#   int nCol = mat->nCol;
#   float* elem = mat->elementos;
#   std::cout << "\n\nLa matriz tiene dimension " << nFil << 'x' << nCol << '\n';
#   for (int f = 0; f < nFil; f++) {
#     for (int c = 0; c < nCol; c++) {
#       std::cout << elem[f * nCol + c] << ' ';
#     }
#     std::cout << '\n';
#   }
#   std::cout << '\n';
# }
#
# void change_elto(structMat* mat, int indF, int indC, float valor) {
#   int numCol = mat->nCol;
#   mat->elementos[indF * numCol + indC] = valor;
# }
#
# void swap(float* e1, float* e2) {
#   float temp1 = *e1;
#   float temp2 = *e2;
#   *e1 = temp2;
#   *e2 = temp1;
# }
#
# void intercambia(structMat* mat, int indF, int indC) {
#   int numCol = mat->nCol;
#   int numFil = mat->nFil;
#   float* datos = mat->elementos;
#   float* e1 = &datos[indF * numCol + indC];
#   float* e2 = &datos[(numFil - indF - 1) * numCol + (numCol - indC - 1)];
#   swap(e1, e2);
# }
#
# std::tuple<float, int, int> find_min(structMat* mat) {
#   int numCol = mat->nCol;
#   int numFil = mat->nFil;
#   float* datos = mat->elementos;
#   float min = infinito;
#   int fmin = -1;
#   int cmin = -1;
#   for (int f = 0; f < numFil; f++) {
#     for (int c = 0; c < numCol; c++) {
#       float valor = datos[f * numCol + c];
#       if (valor < min) {
#         min = valor;
#         fmin = f;
#         cmin = c;
#       }
#     }
#   }
#   return {min, fmin, cmin};
# }
#
# int main() {
#   std::cout << std::fixed << std::setprecision(8);  // Ignorar
#   std::cout << "\nComienza programa manejo matrices con funciones\n";
#
#   structMat* matTrabajo = &mat1;
#   while (true) {
#     print_mat(matTrabajo);
#     std::cout << "(0) Terminar el programa\n"
#                  "(1) Cambiar la matriz de trabajo\n"
#                  "(3) Cambiar el valor de un elemento\n"
#                  "(4) Intercambiar un elemento con su opuesto\n"
#                  "(7) Encontrar el minimo\n"
#                  "\nIntroduce opción elegida: ";
#
#     int opcion;
#     std::cin >> opcion;
#
#     switch (opcion) {
#       // Opción 0
#       case 0:
#         std::cout << "\nTermina el programa\n";
#         return 0;
#
#       // Opción 1
#       case 1:
#         std::cout << "\nElije la matriz de trabajo (1..6): ";
#         int matT;
#         std::cin >> matT;
#         switch (matT) {
#           case 1:
#             matTrabajo = &mat1;
#             break;
#
#           case 2:
#             matTrabajo = &mat2;
#             break;
#
#           case 3:
#             matTrabajo = &mat3;
#             break;
#
#           case 4:
#             matTrabajo = &mat4;
#             break;
#
#           case 5:
#             matTrabajo = &mat5;
#             break;
#
#           case 6:
#             matTrabajo = &mat6;
#             break;
#           default:
#             std::cout << "Numero de matriz de trabajo incorrecto\n";
#         }
#         break;
#
#       // Opción 3
#       case 3:
#         std::cout << "\nIndice de fila: ";
#         int indFil;
#         std::cin >> indFil;
#         if ((indFil < 0) || (indFil >= matTrabajo->nFil)) {
#           std::cerr
#               << "Error: dimension incorrecta.  Numero de fila incorrecto\n";
#         }
#         std::cout << "Indice de columna: ";
#         int indCol;
#         std::cin >> indCol;
#         if ((indCol < 0) || (indCol >= matTrabajo->nCol)) {
#           std::cerr
#               << "Error: dimension incorrecta.  Numero de columna incorrecto\n";
#         }
#         std::cout << "Nuevo valor para el elemento: ";
#         float valor;
#         std::cin >> valor;
#         change_elto(matTrabajo, indFil, indCol, valor);
#         break;
#
#       // Opción 4
#       case 4:
#         std::cout << "\nIndice de fila: ";
#         int indFil;
#         std::cin >> indFil;
#         if ((indFil < 0) || (indFil >= matTrabajo->nFil)) {
#           std::cerr
#               << "Error: dimension incorrecta.  Numero de fila incorrecto\n";
#         }
#         std::cout << "Indice de columna: ";
#         int indCol;
#         std::cin >> indCol;
#         if ((indCol < 0) || (indCol >= matTrabajo->nCol)) {
#           std::cerr
#               << "Error: dimension incorrecta.  Numero de columna incorrecto\n";
#         }
#         intercambia(matTrabajo, indFil, indCol);
#         break;
#
#       // Opción 7
#       case 7:
#         float valorMin;
#         int filaMin;
#         int columnaMin;
#         std::tie(valorMin, filaMin, columnaMin) = find_min(matTrabajo);
#         std::cout << "\nEl valor minimo esta en (" << filaMin << ','
#                   << columnaMin << ") con valor " << valorMin;
#         break;
#  
#       // Opción Incorrecta
#       default:
#       std::cout << "Error: opcion incorrecta\n";
#     }
#   }
# }

# DEFINICIONES DEL PROGRAMA
# ---------------------
#typedef struct {
#  int nFil;
nFil = 0	# El desplazamiento al campo dentro de la estructura
#  int nCol;
nCol = 4	# El desplazamiento al campo dentro de la estructura
#  float elementos[];
elementos = 8	# El desplazamiento al campo dentro de la estructura
#} structMat;
#

sizeF = 4	# Numero de bytes de un float
LF = 10		# Caracter salto de línea

	.data
mat1:	.word	6
	.word	6
	.float	11.11, 12.12, 13.13, 14.14, 15.15, 16.16,
	.float	21.21, 22.22, 23.23, 24.24, 25.25, 26.26,
	.float	31.31, 32.32, 33.33, 34.34, 35.35, 36.36,
	.float	41.41, 42.42, 43.43, 44.44, 45.45, 46.46,
	.float	51.51, 52.52, 53.53, 54.54, 55.55, 56.56,
	.float	61.61, 62.62, 63.63, 64.64, 65.65, 66.66

mat2:	.word	7
	.word	10
	.float	-36.886, -58.201,  78.671,  19.092, -50.781,  33.961, -59.511, 12.347,  57.306,  -1.938,
	.float	-86.858, -81.852,  54.623, -22.574,  88.217,  64.374,  52.312, 47.918, -83.549,  19.041,
	.float	4.255, -36.842,  82.526,  27.394,  56.527,  39.448,  18.429, 97.057,  76.933,  14.583,
	.float	67.79 ,  -9.861, -96.191,  32.369, -18.494, -43.392,  39.857, 80.686, -36.87 , -17.786,
	.float	30.073,  89.938,  -6.889,  64.601, -85.018,  70.559, -48.853, -62.627, -60.147,  -5.524,
	.float	84.323, -51.718,  93.127, -10.757,  32.119,  98.214,  69.471, 73.814,   3.724,  57.208,
	.float	-41.528, -17.458, -64.226, -71.297, -98.745,   7.095, -79.112, 33.819,  63.531, -96.181

mat3:	.word	1
	.word	8
	.float	-36.52,  35.3 ,  79.05, -58.69, -55.23, -19.44, -88.63, -93.61

mat4:	.word	16
	.word	1
	.float	-90.57, -65.11, -58.21, -73.23, -89.38, -79.25,  16.82,  66.3
	.float	-96.14, -97.16, -24.66,   5.27, -33.5 , -13.09,  27.13, -74.83

mat5:	.word	1
	.word	1
	.float	78.98

mat6:	.word	0
	.word	0
	.float	0.0

infinito:	.word	0x7F800000

str_titulo:	.asciiz	"\nComienza programa manejo matrices con funciones\n"
str_menu:	.ascii	"(0) Terminar el programa\n"
		.ascii	"(1) Cambiar la matriz de trabajo\n"
		.ascii	"(3) Cambiar el valor de un elemento\n"
		.ascii	"(4) Intercambiar un elemento con su opuesto\n"
		.ascii	"(7) Encontrar el minimo\n"
		.asciiz	"\nIntroduce opción elegida: "
str_errorOpc:	.asciiz	"Error: opcion incorrecta\n"
str_termina:	.asciiz	"\nTermina el programa\n"
str_elijeMat:	.asciiz	"\nElije la matriz de trabajo (1..6): "
str_numMatMal:	.asciiz	"Numero de matriz de trabajo incorrecto\n"
str_errorFil:	.asciiz	"Error: dimension incorrecta.  Numero de fila incorrecto\n"
str_errorCol:	.asciiz	"Error: dimension incorrecta.  Numero de columna incorrecto\n"
str_indFila:	.asciiz	"\nIndice de fila: "
str_indCol:	.asciiz	"Indice de columna: "
str_nuevoValor:	.asciiz	"Nuevo valor para el elemento: "
str_valMin:	.asciiz	"\nEl valor minimo esta en ("
str_conValor:	.asciiz	") con valor "
str_matTiene:	.asciiz	"\n\nLa matriz tiene dimension "

	.text
# FUNCIÓN I: print_mat
# ---------------------
# Función que imprime por pantalla la matriz actual de trabajo elemento por elemento,
# haciendo uso de dos bucles 'for' anidados.

# ARGUMENTOS Y VALORES DE RETORNO
# ---------------------
# Matriz de trabajo (matT)	= $a0

# TABLA DE REGISTROS
# ---------------------
# Copia de matT			= $s0
# nFil				= $s1
# nCol				= $s2
# int f				= $s3
# int c				= $s4
# Dirección de elem[]		= $t0
# float* elem			= $f12

print_mat:
	# Reservamos espacio en la pila y guardamos valores:
	addi	$sp, $sp, -24
	# Return address:
	sw	$ra, 0($sp)
	# matT (copia de $a0):
	sw	$s0, 4($sp)
	# nFil:
	sw	$s1, 8($sp)
	# nCol:
	sw	$s2, 12($sp)
	# int f (variable iterativa):
	sw	$s3, 16($sp)
	# int c (variable iterativa):
	sw	$s4, 20($sp)

	# Cargamos los valores a utilizar:
	# matT
	move	$s0, $a0
	# nFil
	lw	$s1, nFil($a0)
	# nCol
	lw	$s2, nCol($a0) 
	
	# INICIO
	# ---------------------
	# void print_mat(structMat* mat) {
	# std::cout << "\n\nLa matriz tiene dimension "
	li	$v0, 4
	la	$a0, str_matTiene
	syscall
	# << nFil
	li	$v0, 1
	move	$a0, $s1
	syscall
	# << 'x'
	li	$v0, 11
	la	$a0, 120
	syscall
	# << nCol
	li	$v0, 1
	move	$a0, $s2
	syscall
	# << '\n';
	li	$v0, 11
	la	$a0, LF
	syscall

	# Excepción matriz 0x0:
	beqz $s1, exception_print
	beqz $s2, exception_print

	# int f = 0
	move	$s3, $zero
	# for (int f = 0; f < nFil; ++f) {
	bfor_print_f:
		# int c = 0
		move	$s4, $zero
		# for (int c = 0; c < nCol; ++c) {
		bfor_print_c:
			# f * nCol
			mul	$t0, $s3, $s2
			# (f * nCol) + c
			addu	$t0, $t0, $s4
			# (f * nCol + c) * sizeF
			mul	$t0, $t0, sizeF
			# Dirección de elem[f * nCol + c]
			addu	$t0, $t0, $s0
			# elem[f * nCol + c]
			lwc1	$f12, elementos($t0)

			# std::cout << elem[f * nCol + c]
			li 	$v0, 2
			syscall
			# << ' ';
			li	$v0, 11
			la	$a0, 32
			syscall

			# ++c
			addi	$s4, $s4, 1
			# Comprobamos 'c < nCol' para continuar en el bucle 'for' (bfor_print_c).
			blt	$s4, $s2, bfor_print_c
		# }
		# std::cout << '\n';
		li	$v0, 11
		la	$a0, LF
		syscall

		# ++f
		addi	$s3, $s3, 1
		# Comprobamos 'f < nFil' para continuar en el bucle 'for' (bfor_print_f).
		blt	$s3, $s1, bfor_print_f
	# }
	# std::cout << '\n';
	li	$v0, 11
	la	$a0, LF
	syscall
	
	# La etiqueta 'exception' es exclusiva para el uso de la matriz vacía (0x0).
	exception_print:
	# Restauramos valores y liberamos espacio en la pila:
	lw	$s4, 20($sp)
	lw	$s3, 16($sp)
	lw	$s2, 12($sp)
	lw	$s1, 8($sp)
	lw	$s0, 4($sp)
	lw	$ra, 0($sp)
	addi	$sp, $sp, 24

	# }
	jr	$ra
print_mat_fin:

# FUNCIÓN II: change_elto
# ---------------------
# Función que cambia un valor de la matriz elegido por el usuario a través de los índices
# de fila y columna del elemento a cambiar. El usuario asigna el nuevo valor del elemento.

# ARGUMENTOS Y REGISTROS DE RETORNO
# ---------------------
# structMat* mat	= $a0
# int indF		= $a1
# int indC		= $a2

# TABLA DE REGISTROS
# ---------------------
# int numCol				= $t0
# mat->elementos[indF * numCol + indC]	= $t1

change_elto:
	# void change_elto(structMat* mat, int indF, int indC, float valor) {
	# int numCol = mat->nCol;
	lw	$t0, nCol($a0)

	# indF * numCol
	mul	$t1, $a1, $t0
	# (indF * numCol) + indC
	addu	$t1, $t1, $a2
	# (indF * numCol + indC) * sizeF
	mul	$t1, $t1, sizeF
	# Dirección de elementos[indF * numCol + indC]
	addu	$t1, $t1, $a0

	# mat->elementos[indF * numCol + indC] = valor;
	swc1	$f12, elementos($t1)
	
	# }
	jr	$ra
change_elto_fin:

# FUNCIÓN III: swap
# ---------------------
# Función encargada del intercambio de valores entre registros. Esta función
# es únicamente empleada cuando se requiere cambiar valores entre registros
# sin la intervención del usuario, es decir, sin que el usuario elija el nuevo
# valor.

# ARGUMENTOS Y REGISTROS DE RETORNO
# ---------------------
# float* e1	= $a0
# float* e2	= $a1

# TABLA DE REGISTROS
# ---------------------
# float temp1	= $f16
# float temp2	= $f17

swap:
	# void swap(float* e1, float* e2) {
	# float temp1 = *e1;
	lwc1	$f16, 0($a0)
	# float temp2 = *e2;
	lwc1	$f17, 0($a1)
	# *e1 = temp2;
	swc1	$f16, 0($a1)
	# *e2 = temp1;
	swc1	$f17, 0($a0)
	# }
	jr	$ra
swap_fin:

# FUNCIÓN IV: intercambia
# ---------------------
# Función que cambia un valor de la matriz elegido por el usuario a través de los índices
# de fila y columna del elemento a cambiar por su diametralmente opuesto.

# ARGUMENTOS Y REGISTROS DE RETORNO
# ---------------------
# structMat* mat	= $a0
# int indF		= $a1
# int indC		= $a2

# TABLA DE REGISTROS
# ---------------------
# int numFil			= $t0
# int numCol			= $t1
# Dirección de float* e1	= $t2
# numFil - indF - 1		= $t3
# numCol - indC - 1		= $t4
# Dirección de float* e2	= $t5

intercambia:
	# void intercambia(structMat* mat, int indF, int indC) {
	# int numFil = mat->nFil;
	lw	$t0, nFil($a0)
	# int numCol = mat->nCol;
	lw	$t1, nCol($a0)

	# Desplazamos $a0 8 espacios para acceder directamente a los elementos:
	addi	$a0, elementos

	# indF * numCol
	mul	$t2, $a1, $t1
	# (indF * numCol) + indC
	addu	$t2, $t2, $a2
	# (indF * numCol + indC) * sizeF
	mul	$t2, $t2, sizeF
	# Dirección de float* e1 = &datos[indF * numCol + indC];
	addu	$t2, $t2, $a0
	
	# numFil - indF
	subu	$t3, $t0, $a1
	# (numFil - indF) - 1
	addi	$t3, $t3, -1

	# numCol - indC
	subu	$t4, $t1, $a2
	# (numCol - indC) - 1
	addi	$t4, $t4, -1

	# (numFil - indF - 1) * numCol
	mul	$t5, $t3, $t1
	# (numFil - indF - 1) * numCol + (numCol - indC - 1)
	addu	$t5, $t5, $t4
	# [(numFil - indF - 1) * numCol + (numCol - indC - 1)] * sizeF
	mul	$t5, $t5, sizeF
	# Dirección de float* e2 = &datos[(numFil - indF - 1) * numCol + (numCol - indC - 1)];
	addu	$t5, $t5, $a0

	# Reservamos espacio en la pila:
	addi	$sp, $sp, -4
	# Guardamos 'return address'
	sw	$ra, 0($sp)

	# Cargamos 'e1' en $a0 para usarlo en 'swap':
	move	$a0, $t2
	# Cargamos 'e2' en $a1 para usarlo en 'swap':
	move	$a1, $t5

	# swap(e1, e2);
	jal	swap
	
	# Restauramos valores y liberamos espacio en la pila:
	lw	$ra, 0($sp)
	addi	$sp, $sp, 4
	
	# }
	jr	$ra
intercambia_fin:

# FUNCIÓN V: find_min (encontrar mínimo)
# ---------------------
# Función que busca y guarda el mínimo de la matriz actual de trabajo, así como los índices
# de fila y columna que designan la posición de dicho mínimo.

# ARGUMENTOS Y REGISTROS DE RETORNO
# ---------------------
# structMat* mat		= $a0

# TABLA DE REGISTROS
# ---------------------
# numFil			= $t0
# numCol			= $t1
# int fmin			= $t2
# int cmin			= $t3
# int f				= $t4
# int c				= $t5
# Dirección de datos[]		= $t6
# float min			= $f7
# float valor			= $f8

find_min:
	# std::tuple<float, int, int> find_min(structMat* mat) {
	# int numFil = mat->nFil;
	lw	$t0, nFil($a0)
	# int numCol = mat->nCol;
	lw	$t1, nCol($a0)
	# float min = infinito;
	lwc1	$f7, infinito
	# int fmin = -1;
	li	$t2, -1
	# int cmin = -1;
	li	$t3, -1
	
	# Excepción matriz 0x0:
	beqz	$t0, exception_min
	# int f = 0
	move	$t4, $zero
	# for (int f = 0; f < numFil; f++) {
	bfor_min_f:
		# int c = 0
		move	$t5, $zero
		# for (int c = 0; c < numCol; c++) {
		bfor_min_c:
			# f * numCol
			mul	$t6, $t4, $t1
			# (f * numCol) + c
			addu	$t6, $t6, $t5
			# (f * numCol + c) * sizeF
			mul	$t6, $t6, sizeF
			# Dirección de datos[f * nCol + c]
			addu	$t6, $t6, $a0
			# float valor = datos[f * numCol + c];
			lwc1	$f8, elementos($t6)

			# Comprobamos 'valor < min' para actualizar el mínimo:
			c.lt.s	$f8, $f7
			# Si no es menor, no se actualiza:
			bc1f	preserve_min
			
			# if (valor < min) {
			# 	min = valor;
			mov.s	$f7, $f8
			# 	fmin = f;
			move	$t2, $t4
			# 	cmin = c;
			move	$t3, $t5
			# }
			
			preserve_min:
			# c++
			addi	$t5, $t5, 1
			# Comprobamos 'c < numCol' para continuar en el bucle 'for' (bfor_print_c).
			blt	$t5, $t1, bfor_min_c
		# }
		# f++
		addi	$t4, $t4, 1
		# Comprobamos 'f < nFil' para continuar en el bucle 'for' (bfor_print_f).
		blt	$t4, $t0, bfor_min_f
	# }

	exception_min:
	# return {min, fmin, cmin};
	# min $f7 --> $f0
	mov.s	$f0, $f7
	# fmin $t2 --> $v0
	move	$v0, $t2
	# cmin $t3 --> $v1
	move	$v1, $t3

	# }
	jr	$ra
find_min_fin:

# FUNCIÓN MAIN
# ---------------------
# Matriz de trabajo	= $s0

main:
# El apartado 'prelude' sirve exclusivamente para cargar 'mat1' como la primera matriz de trabajo, y no
# volverá a ser empleado en ningún otro momento a lo largo de la ejecución del programa.
	prelude:
		# Introducción al programa:
		#
		# int main() {
		# std::cout << "\nComienza programa manejo matrices con funciones\n";
		li 	$v0, 4
		la 	$a0, str_titulo
		syscall
		
		# structMat* matTrabajo = &mat1; 
		la	$s0, mat1
		
	# while (true) {
	main_menu:
		# Cargamos matT en $a0 para usarla en print_mat:
		move	$a0, $s0

		# print_mat(matTrabajo);
		jal	print_mat

		# std::cout << "(0) Terminar el programa\n"
                #	       "(1) Cambiar la matriz de trabajo\n"
                # 	       "(3) Cambiar el valor de un elemento\n"
                # 	       "(4) Intercambiar un elemento con su opuesto\n"
                # 	       "(7) Encontrar el minimo\n"
                # 	       "\nIntroduce opción elegida: ";
		li	$v0, 4
		la	$a0, str_menu
		syscall

		# int opcion;
    		# std::cin >> opcion;
		li	$v0, 5
		syscall
		
		# switch (opcion) {
		# case 0:
		beqz	$v0, opcion_0
		# case 1:
		beq	$v0, 1, opcion_1
		# case 3:
		beq	$v0, 3, opcion_3
		# case 4:
		beq 	$v0, 4, opcion_4
		# case 7:
		beq	$v0, 7, opcion_7
		# default:
		# std::cout << "Error: opcion incorrecta\n";
		li	$v0, 4
		la	$a0, str_errorOpc
		syscall

		j	main_menu
		# }

		
		opcion_0:
			# case 0:
			# std::cout << "\nTermina el programa\n";
			li	$v0, 4
			la	$a0, str_termina
			syscall

			# return 0;
			li	$v0, 10
			syscall
			# }

		opcion_1:
			# case 1:
			# std::cout << "\nElije la matriz de trabajo (1..6): ";
			li	$v0, 4
			la	$a0, str_elijeMat
			syscall

			# int matT;
        		# std::cin >> matT;
			li	$v0, 5
			syscall
			
			# switch (matT) {
			# case 1:
			beq	$v0, 1, matT_1
			# case 2:
			beq	$v0, 2, matT_2
			# case 3:
			beq 	$v0, 3, matT_3
			# case 4:
			beq	$v0, 4, matT_4
			# case 5:
			beq	$v0, 5, matT_5
			# case 6:
			beq	$v0, 6, matT_6
			# default:
			# std::cout << "Numero de matriz de trabajo incorrecto\n";
			li	$v0, 4
			la 	$a0, str_numMatMal
			syscall
			# }
        		# break;
			j	main_menu

			matT_1:
				# case 1:
				# structMat* matTrabajo = &mat1; 
				la	$s0, mat1

				j	main_menu
			
			matT_2:
				# case 2:
				# structMat* matTrabajo = &mat2; 
				la	$s0, mat2

				j main_menu

			matT_3:
				# case 3:
				# structMat* matTrabajo = &mat3; 
				la	$s0, mat3
				
				j	main_menu
			
			matT_4:
				# case 4:
				# structMat* matTrabajo = &mat4; 
				la	$s0, mat4

				j	main_menu
			
			matT_5:
				# case 5:
				# structMat* matTrabajo = &mat5; 
				la	$s0, mat5

				j	main_menu

			matT_6:
				# case 6:
				# structMat* matTrabajo = &mat6; 
				la	$s0, mat6

				j	main_menu

		# OPCIÓN 3
		# ---------------------
		# indFil	= $s1
		# indCol	= $s2
		# valor		= $f12

		opcion_3:
			# case 3:
			# std::cout << "\nIndice de fila: ";
			li	$v0, 4
			la	$a0, str_indFila
			syscall
			
			# int indFil;
			# std::cin >> indFil;
			li	$v0, 5
			syscall
			move	$s1, $v0

			# if (indFil < 0)
			bltz	$v0, indFil_err
			# $t0 = nFil
			lw	$t0, nFil($s0)
			# if (indFil >= matTrabajo->nFil)
			bge	$v0, $t0, indFil_err
			
			# std::cout << "Indice de columna: ";
			li	$v0, 4
			la	$a0, str_indCol
			syscall

			# int indCol;
        		# std::cin >> indCol;
			li	$v0, 5
			syscall
			move	$s2, $v0

			# if ((indCol < 0)
			bltz	$v0, indCol_err
			# $t0 = nCol
			lw	$t0, nCol($s0)
			# if (indCol >= matTrabajo->nCol)
			bge	$v0, $t0, indCol_err

			# std::cout << "Nuevo valor para el elemento: ";
			li	$v0, 4
			la	$a0, str_nuevoValor
			syscall
			
			# float valor;
			# std::cin >> valor;
			li	$v0, 6
			syscall
			# 'valor' ya se encuentra en un registro de argumento.
			mov.s	$f12, $f0

			# Cargamos los valores en argumentos para emplearlos en change_elto:
			# matTrabajo $s0 --> $a0
			move	$a0, $s0
			# indFil $s1 --> $a1
			move	$a1, $s1
			# indCol $s2 --> $a2
			move	$a2, $s2

			# change_elto(matTrabajo, indFil, indCol, valor);
			jal	change_elto

			# break;
			j	main_menu

		# OPCIÓN 4
		# ---------------------
		# indFil	= $s1
		# indCol	= $s2

		opcion_4:
			# case 4:
			# std::cout << "\nIndice de fila: ";
			li	$v0, 4
			la	$a0, str_indFila
			syscall

			# int indFil;
        		# std::cin >> indFil;
			li	$v0, 5
			syscall
			move	$s1, $v0
			
			# if (indFil < 0)
			bltz	$v0, indFil_err
			# $t0 = nFil
			lw	$t0, nFil($s0)
			# if (indFil >= matTrabajo->nFil)
			bge	$v0, $t0, indFil_err
			
			# std::cout << "Indice de columna: ";
			li	$v0, 4
			la	$a0, str_indCol
			syscall

			# int indCol;
        		# std::cin >> indCol;
			li	$v0, 5
			syscall
			# Cargamos indCol directamente en $a2	
			move	$a2, $v0

			# if ((indCol < 0)
			bltz	$v0, indCol_err
			# $t0 = nCol
			lw	$t0, nCol($s0)
			# if (indCol >= matTrabajo->nCol)
			bge	$v0, $t0, indCol_err

			# Cargamos los valores en argumentos para emplearlos en change_elto:
			# matTrabajo $s0 --> $a0
			move	$a0, $s0
			# indFil $s1 --> $a1
			move	$a1, $s1

			# intercambia(matTrabajo, indFil, indCol);
			jal	intercambia

			# break;
			j	main_menu
			
		indFil_err:
			# if ((indFil < 0) || (indFil >= matTrabajo->nFil)) {
			# std::cerr << "Error: dimension incorrecta.  Numero de fila incorrecto\n";
			li	$v0, 4
			la	$a0, str_errorFil
			syscall
			
			# }
			j	main_menu
			
		indCol_err:
			# if ((indCol < 0) || (indCol >= matTrabajo->nCol)) {
			# std::cerr << "Error: dimension incorrecta.  Numero de columna incorrecto\n";
			li	$v0, 4
			la	$a0, str_errorCol
			syscall
			
			# }
			j	main_menu
			
		# OPCIÓN 7
		# ---------------------
		# int filaMin		= $s1
		# int columnaMin	= $s2
		# float valorMin	= $f20

		opcion_7:
			# case 7:
			# Cargamos matT en $a0 para usarla en find_min:
			move	$a0, $s0

			# std::tie(valorMin, filaMin, columnaMin) = find_min(matTrabajo);
			jal	find_min
			
			#Guardamos los valores de retorno en registros salvados para que no se sobrescriban:
			# filaMin $v0 --> $s1
			move	$s1, $v0
			# columnaMin $v1 --> $s2
			move	$s2, $v1
			# valorMin $f0 --> $f20
			mov.s	$f20, $f0

			# std::cout << "\nEl valor minimo esta en ("
			li	$v0, 4
			la	$a0, str_valMin
			syscall

			# << filaMin
			li	$v0, 1
			move	$a0, $s1
			syscall

			# << ','
			li	$v0, 11
			la	$a0, 44 
			syscall

			# << columnaMin
			li	$v0, 1
			move	$a0, $s2
			syscall

			# << ") con valor "
			li	$v0, 4
			la	$a0, str_conValor
			syscall

			# << valorMin;
			li	$v0, 2
			mov.s	$f12, $f20
			syscall

			# break;
			j	main_menu