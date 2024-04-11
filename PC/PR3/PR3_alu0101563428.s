# AUTOR: Rodríguez González, Javier 
# E-MAIL: alu0101563428@ull.edu.es
# FECHA ÚLTIMA MODIFICACIÓN: 9 abr. 2024

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
#       // Opción 3  y  4
#       case 3:
#       case 4:
#         std::cout << "\nIndice de fila: ";
#         int indFil;
#         std::cin >> indFil;
#         if ((indFil < 0) || (indFil >= matTrabajo->nFil)) {
#           std::cerr
#               << "Error: dimension incorrecta.  Numero de fila incorrecto\n";
#           continue;  // volvemos al principio del bucle
#         }
#         std::cout << "Indice de columna: ";
#         int indCol;
#         std::cin >> indCol;
#         if ((indCol < 0) || (indCol >= matTrabajo->nCol)) {
#           std::cerr
#               << "Error: dimension incorrecta.  Numero de columna incorrecto\n";
#           continue;  // volvemos al principio del bucle
#         }
#
#         if (opcion == 3) {
#           std::cout << "Nuevo valor para el elemento: ";
#           float valor;
#           std::cin >> valor;
#           change_elto(matTrabajo, indFil, indCol, valor);
#         }
#         if (opcion == 4) {
#           intercambia(matTrabajo, indFil, indCol);
#         }
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

# TABLA DE REGISTROS SALVADOS
# ---------------------
# mat

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
# FUNCIÓN I: print_mat (imprimir matriz)
# ---------------------
# int f				= $t0
# int c				= $t1
# Dirección de elem[]		= $t2
# Tamaño de elemento		= $t7
# elem[f * nCol + c]		= $f12

print_mat:
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
	beqz $s1, exception
	beqz $s2, exception

	# Guardamos el tamaño de elemento en $t7.
	li	$t7, sizeF
	# int f = 0
	move	$t0, $zero
	# for (int f = 0; f < nFil; f++) {
	bfor_f:
		# int c = 0
		move	$t1, $zero
		# for (int c = 0; c < nCol; c++) {
		bfor_c:
			# f * nCol
			mul	$t2, $t0, $s2
			# (f * nCol) + c
			addu	$t2, $t2, $t1
			# (f * nCol + c) * sizeF
			mul	$t2, $t2, $t7
			# Dirección de elem[f * nCol + c]
			addu	$t2, $t2, $s0
			# elem[f * nCol + c]
			lwc1	$f12, elementos($t2)

			# std::cout << elem[f * nCol + c]
			li 	$v0, 2
			syscall
			# << ' ';
			li	$v0, 11
			la	$a0, 32
			syscall

			# c++
			addi	$t1, $t1, 1
			# Comprobamos 'c < nCol' para continuar en el bucle 'for' (bfor_c).
			blt	$t1, $s2, bfor_c
		# }
		# std::cout << '\n';
		li	$v0, 11
		la	$a0, LF
		syscall

		# f++
		addi	$t0, $t0, 1
		# Comprobamos 'f < nFil' para continuar en el bucle 'for' (bfor_f).
		blt	$t0, $s1, bfor_f
	# }
	# std::cout << '\n';
	li	$v0, 11
	la	$a0, LF
	syscall
	# }
	
	exception:
	jr	$ra

print_mat_fin:

# FUNCIÓN II: change_elto (cambiar elemento)
change_elto:
	jr	$ra
change_elto_fin:

# FUNCIÓN III: swap (intercambio)
swap:
	jr	$ra
swap_fin:

# FUNCIÓN IV: intercambia (intercambio de valor diametralmente opuesto)
intercambia:
	jr	$ra
intercambia_fin:

# FUNCIÓN V: find_min (encontrar mínimo)
# ---------------------
# 
find_min:
	jr	$ra
find_min_fin:

# FUNCIÓN MAIN
# ---------------------
# int opcion	= $t0

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
		# int nFil = &mat1->nFil;
		lw	$s1, nFil($s0)
		# int nCol = &mat1->nCol;
		lw	$s2, nCol($s0)

	# while (true) {
	main_menu:
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
		move 	$t0, $v0
		
		# switch (opcion) {
		# case 0:
		beqz	$t0, opcion_0
		# case 1:
		beq	$t0, 1, opcion_1
		# case 3:
		beq	$t0, 3, opcion_3
		# case 4:
		beq 	$t0, 4, opcion_4
		# case 7:
		beq	$t0, 7, opcion_7
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
		
		# OPCIÓN 1
		# ---------------------
		# matT		= $t0
		
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
			move	$t0, $v0
			
			# switch (matT) {
			# case 1:
			beq	$t0, 1, matT_1
			# case 2:
			beq	$t0, 2, matT_2
			# case 3:
			beq 	$t0, 3, matT_3
			# case 4:
			beq	$t0, 4, matT_4
			# case 5:
			beq	$t0, 5, matT_5
			# case 6:
			beq	$t0, 6, matT_6
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
				# int nFil = &mat1->nFil;
				lw	$s1, nFil($s0)
				# int nCol = &mat1->nCol;
				lw	$s2, nCol($s0)

				j	main_menu
			
			matT_2:
				# case 2:
				# structMat* matTrabajo = &mat2; 
				la	$s0, mat2
				# int nFil = &mat2->nFil;
				lw	$s1, nFil($s0)
				# int nCol = &mat2->nCol;
				lw	$s2, nCol($s0)

				j main_menu

			matT_3:
				# case 3:
				# structMat* matTrabajo = &mat3; 
				la	$s0, mat3
				# int nFil = &mat3->nFil;
				lw	$s1, nFil($s0)
				# int nCol = &mat3->nCol;
				lw	$s2, nCol($s0)

				j	main_menu
			
			matT_4:
				# case 4:
				# structMat* matTrabajo = &mat4; 
				la	$s0, mat4
				# int nFil = &mat4->nFil;
				lw	$s1, nFil($s0)
				# int nCol = &mat4->nCol;
				lw	$s2, nCol($s0)

				j	main_menu
			
			matT_5:
				# case 5:
				# structMat* matTrabajo = &mat5; 
				la	$s0, mat5
				# int nFil = &mat5->nFil;
				lw	$s1, nFil($s0)
				# int nCol = &mat5->nCol;
				lw	$s2, nCol($s0)

				j	main_menu

			matT_6:
				# case 6:
				# structMat* matTrabajo = &mat6; 
				la	$s0, mat6
				# int nFil = &mat6->nFil;
				lw	$s1, nFil($s0)
				# int nCol = &mat6->nCol;
				lw	$s2, nCol($s0)

				j	main_menu

		# OPCIÓN 3 Y 4
		# ---------------------
		# indFil	= $t0
		# indCol	= $t1

		opcion_3_4:
			# case 3:
			# case 4:
			# std::cout << "\nIndice de fila: ";
			li	$v0, 4
			la	$a0, str_indFila
			syscall

			# int indFil;
        		# std::cin >> indFil;
			li	$v0, 5
			syscall
			move	$t0, $v0
			
			# if (indFil < 0)
			bltz	$t0, indFil_err
			# if (indFil >= matTrabajo->nFil)
			bge	$t0, $s1, indFil_err
			
			# std::cout << "Indice de columna: ";
			li	$v0, 4
			la	$a0, str_indCol
			syscall

			# int indCol;
        		# std::cin >> indCol;
			li	$v0, 5
			syscall
			move	$t1, $v0

			# if ((indCol < 0)
			bltz	$t1, indCol_err
			# if (indCol >= matTrabajo->nCol)
			bge	$t1, $s2, indCol_err

			jr	$ra
			
			indFil_err:
				# if ((indFil < 0) || (indFil >= matTrabajo->nFil)) {
				# std::cerr << "Error: dimension incorrecta.  Numero de fila incorrecto\n";
				li	$v0, 4
				la	$a0, str_errorFil
				syscall
				# }
				jr	$ra
			
			indCol_err:
				# if ((indCol < 0) || (indCol >= matTrabajo->nCol)) {
				# std::cerr << "Error: dimension incorrecta.  Numero de columna incorrecto\n";
				li	$v0, 4
				la	$a0, str_errorCol
				syscall
				# }
				jr	$ra

			opcion_3:
				# case 3:
				jal	opcion_3_4

				# [...]
				# std::cout << "Nuevo valor para el elemento: ";
				li	$v0, 4
				la	$a0, str_nuevoValor
				syscall

				# float valor;
      	  			# std::cin >> valor;
				li	$v0, 6
				syscall
				mov.s	$f20, $f20

				# change_elto(matTrabajo, indFil, indCol, valor);
				jal	change_elto

				# break;
				j	main_menu
			
			opcion_4:
				# case 4:
				jal	opcion_3_4

				# [...]
				# intercambia(matTrabajo, indFil, indCol);
				jal	intercambia

				# break;
				j	main_menu
		opcion_7:
		