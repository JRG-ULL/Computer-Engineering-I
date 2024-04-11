# Práctica 3 - Javier Rodríguez González (alu0101563428@ull.edu.es)
# ÚLTIMA MODIFICACIÓN --> 14 ABR. 2023



# --- CÓDIGO DEL PROGRAMA EN C++ ---

# #include <iostream>
# 
# // En C++ para poder utilizar el indexado de una matriz (bidimensiónal)
# // mediante dos pares de corchetes el número de filas y columnas no pude cambiar,
# // debe ser constante y conocido desde el principio.
# //
# // En esta práctica queremos cambiar el número de filas y columnas de la matriz
# // considerada.
# // Para poder emular en C++ lo que podemos hacer en ensamblador
# // vamos a manejar la matriz como un vector.
# // Para acceder al elenemto en la fila de índice `f` y columna de índice `c`
# // no podemos hacer `mat[f][c]` sino que debemos hacer `mat[f*ncol+c]`
# 
# 
# int main(void) {
# 
#   int mat[] = {
#     100, 101, 102, 103, 104, 105, 106, 107, 108, 109, 110, 111, 112, 113, 114, 115, 116, 117, 118, 119,
#     120, 121, 122, 123, 124, 125, 126, 127, 128, 129, 130, 131, 132, 133, 134, 135, 136, 137, 138, 139,
#     140, 141, 142, 143, 144, 145, 146, 147, 148, 149, 150, 151, 152, 153, 154, 155, 156, 157, 158, 159,
#     160, 161, 162, 163, 164, 165, 166, 167, 168, 169, 170, 171, 172, 173, 174, 175, 176, 177, 178, 179,
#     180, 181, 182, 183, 184, 185, 186, 187, 188, 189, 190, 191, 192, 193, 194, 195, 196, 197, 198, 199,
#     200, 201, 202, 203, 204, 205, 206, 207, 208, 209, 210, 211, 212, 213, 214, 215, 216, 217, 218, 219,
#     220, 221, 222, 223, 224, 225, 226, 227, 228, 229, 230, 231, 232, 233, 234, 235, 236, 237, 238, 239,
#     240, 241, 242, 243, 244, 245, 246, 247, 248, 249, 250, 251, 252, 253, 254, 255, 256, 257, 258, 259,
#     260, 261, 262, 263, 264, 265, 266, 267, 268, 269, 270, 271, 272, 273, 274, 275, 276, 277, 278, 279,
#     280, 281, 282, 283, 284, 285, 286, 287, 288, 289, 290, 291, 292, 293, 294, 295, 296, 297, 298, 299,
#     300, 301, 302, 303, 304, 305, 306, 307, 308, 309, 310, 311, 312, 313, 314, 315, 316, 317, 318, 319,
#     320, 321, 322, 323, 324, 325, 326, 327, 328, 329, 330, 331, 332, 333, 334, 335, 336, 337, 338, 339,
#     340, 341, 342, 343, 344, 345, 346, 347, 348, 349, 350, 351, 352, 353, 354, 355, 356, 357, 358, 359,
#     360, 361, 362, 363, 364, 365, 366, 367, 368, 369, 370, 371, 372, 373, 374, 375, 376, 377, 378, 379,
#     380, 381, 382, 383, 384, 385, 386, 387, 388, 389, 390, 391, 392, 393, 394, 395, 396, 397, 398, 399,
#     400, 401, 402, 403, 404, 405, 406, 407, 408, 409, 410, 411, 412, 413, 414, 415, 416, 417, 418, 419,
#     420, 421, 422, 423, 424, 425, 426, 427, 428, 429, 430, 431, 432, 433, 434, 435, 436, 437, 438, 439,
#     440, 441, 442, 443, 444, 445, 446, 447, 448, 449, 450, 451, 452, 453, 454, 455, 456, 457, 458, 459,
#     460, 461, 462, 463, 464, 465, 466, 467, 468, 469, 470, 471, 472, 473, 474, 475, 476, 477, 478, 479,
#     480, 481, 482, 483, 484, 485, 486, 487, 488, 489, 490, 491, 492, 493, 494, 495, 496, 497, 498, 499,
#   };
# 
#   const int maximoElementos = 400;
#   int nfil = 20;
#   int ncol = 10;
# 
#   // se imprime el título
#   std::cout << "\nPráctica PR3 de Principios de Computadores. Matrices.\n";
# 
#   std::cout << "\nLa matriz es " << nfil << "x" << ncol << "\n";
#   for (int f = 0; f < nfil; f++)
#   {
#     for (int c = 0; c < ncol; c++)
#     {
#       std::cout << mat[f * ncol + c] << "  "; // equivalente a acceso 'mat[f][c]'
#     }
#     std::cout << "\n";
#   }
#   std::cout << "\n(1) Cambiar dimensiones.";
#   std::cout << "\n(2) Intercambiar dos elemntos.";
#   std::cout << "\n(3) Suma elementos del perímetro.";
#   std::cout << "\n(4) Calcular máximo y mínimo de la diagonal principal.";
#   std::cout << "\n(0) Salir.\n";
#   std::cout << "\nElija una opción: ";
#   std::cin >> choice;
#   if (choice == 0)
#   {
#     break;
#   }
#   while (choice < 0 || choice > 4)
#   {
#     std::cout << "\n(1) Cambiar dimensiones.";
#     std::cout << "\n(2) Intercambiar dos elemntos.";
#     std::cout << "\n(3) Suma elementos del perímetro.";
#     std::cout << "\n(4) Calcular máximo y mínimo de la diagonal principal.";
#     std::cout << "\n(0) Salir.\n";
#     std::cout << "\nElija una opción: ";
#     std::cin >> choice;
#   }
#   if (choice == 1)
#   {
#     int nuevafil;
#     int nuevacol;
#     std::cout << "Introduzca numero de filas: ";
#     std::cin >> nuevafil;
#     if (nuevafil <= 0)
#     {
#       std::cout << "\nError: dimensión incorrecta. Numero de fila incorrecto.\n";
#       continue;
#     }
#     std::cout << "Introduzca numero de columnas: ";
#     std::cin >> nuevacol;
#     if (nuevacol <= 0)
#     {
#       std::cout << "\nError: dimensión incorrecta. Numero de columna incorrecto.\n";
#       continue;
#     }
#     if ((nuevafil * nuevacol) > maximoElementos)
#     {
#       std::cout << "\nError: dimensión incorrecta. Excede el maximo numero de elementos (400).\n";
#       continue;
#     }
#     nfil = nuevafil;
#     ncol = nuevacol;
#   }
#   if(choice == 2)
#   {
#     int primfila;
#     int segfila;
#     int primcolumna;
#     int segcolumna;
#     int aux;
#     std::cout << "Introduzca fila del primer elemento a cambiar: ";
#     std::cin >> primfila;
#     if(primfila < 0 || primfila >= nfil)
#     {
#       std::cout << "\nError: dimensión incorrecta. Numero de fila incorrecto.\n";
#       continue;
#     }
#     std::cout << "Introduzca columna del primer elemento a cambiar: ";
#     std::cin >> primcolumna;
#     if(primcolumna < 0 || primcolumna >= ncol)
#     {
#       std::cout << "\nError: dimensión incorrecta. Numero de columna incorrecto.\n";
#       continue;
#     }
#     std::cout << "Introduzca fila del segundo elemento a cambiar: ";
#     std::cin >> segfila;
#     if(segfila < 0 || segfila >= nfil)
#     {
#       std::cout << "\nError: dimensión incorrecta. Numero de fila incorrecto.\n";
#       continue;
#     }
#     std::cout << "Introduzca columna del segundo elemento a cambiar: ";
#     std::cin >> segcolumna;
#     if(segcolumna < 0 || segcolumna >= ncol)
#     {
#       std::cout << "\nError: dimensión incorrecta. Numero de columna incorrecto.\n";
#       continue;
#     }
#     aux = mat[primfila * ncol + primcolumna];
#     mat[primfila * ncol + primcolumna] = mat[segfila * ncol + segcolumna];
#     mat[segfila * ncol + segcolumna] = aux;
#   }
#   if(choice == 3)
#   {
#     int perimetro = 0;
#     for (int perifil = 0; perifil < nfil; perifil++)
#     {
#       for (int pericol = 0; pericol < ncol; pericol++)
#       {
#         if (perifil == 0 || perifil == nfil - 1 || pericol == 0 || pericol == ncol - 1){
#           perimetro += mat[perifil * ncol + pericol];
#         }
#       }
#     }
#     std::cout << "\n\nSuma de los elementos del perímetro: " << perimetro;
#   }
#   if (choice == 4)
#   {
#     int minimo = 500;
#     int maximo = 0;
#     for (int f = 0, c = f; f < nfil, c < ncol; f++, c++)
#     {
#       if (mat[f * ncol + c] < minimo)
#       {
#         minimo = mat[f * ncol + c];
#       }
#       if (mat[f * ncol + c] > maximo)
#       {
#         maximo = mat[f * ncol + c];
#       }
#     }
#     std::cout <<  "\nEl máximo de la diagonal principal es " << maximo << " y el mínimo " << minimo << std::endl;
#   }
# while (true);
# std::cout << "\nFin del programa.\n";
# }



# --- CÓDIGO DEL PROGRAMA EN ENSAMBLADOR ---



#       [ TABLA DE REGISTROS ]

# maximoElementos               = $s0
# nfil                          = $s1
# ncol                          = $s2
# matriz                        = $s3
# índice de la fila (f)         = $t0
# tamaño del elemento (mat[])   = $t1
# índice de la columna (c)      = $t2
# elemento de la matriz         = $t3
# elección del usuario          = $t4
# tamaño de dimensión           = $t5
# nuevo número de filas         = $t6
# nuevo número de columnas      = $t7

#            · FASE II ·
# fila del primer elemento      = $t0
# columna del primer elemento   = $t1
# fila del segundo elemento     = $t2
# columna del segundo elemento  = $t3
# aux                           = $t4

#           · FASE III ·
# perímetro                     = $s4
# perifil                       = $t5
# tamaño del elemento (mat[])   = $t6
# pericol                       = $t7
# mat[perifil * ncol + pericol] = $t0
# nfil - 1                      = $t1
# ncol - 1                      = $t2

#            · FASE IV ·
# 



maximoElementos = 400 # número de enteros máximo reservado para la matriz 1600 bytes
size = 4 # bytes que ocupa un entero
    .data
mat:   .word   100, 101, 102, 103, 104, 105, 106, 107, 108, 109, 110, 111, 112, 113, 114, 115, 116, 117, 118, 119
       .word   120, 121, 122, 123, 124, 125, 126, 127, 128, 129, 130, 131, 132, 133, 134, 135, 136, 137, 138, 139
       .word   140, 141, 142, 143, 144, 145, 146, 147, 148, 149, 150, 151, 152, 153, 154, 155, 156, 157, 158, 159
       .word   160, 161, 162, 163, 164, 165, 166, 167, 168, 169, 170, 171, 172, 173, 174, 175, 176, 177, 178, 179
       .word   180, 181, 182, 183, 184, 185, 186, 187, 188, 189, 190, 191, 192, 193, 194, 195, 196, 197, 198, 199
       .word   200, 201, 202, 203, 204, 205, 206, 207, 208, 209, 210, 211, 212, 213, 214, 215, 216, 217, 218, 219
       .word   220, 221, 222, 223, 224, 225, 226, 227, 228, 229, 230, 231, 232, 233, 234, 235, 236, 237, 238, 239
       .word   240, 241, 242, 243, 244, 245, 246, 247, 248, 249, 250, 251, 252, 253, 254, 255, 256, 257, 258, 259
       .word   260, 261, 262, 263, 264, 265, 266, 267, 268, 269, 270, 271, 272, 273, 274, 275, 276, 277, 278, 279
       .word   280, 281, 282, 283, 284, 285, 286, 287, 288, 289, 290, 291, 292, 293, 294, 295, 296, 297, 298, 299
       .word   300, 301, 302, 303, 304, 305, 306, 307, 308, 309, 310, 311, 312, 313, 314, 315, 316, 317, 318, 319
       .word   320, 321, 322, 323, 324, 325, 326, 327, 328, 329, 330, 331, 332, 333, 334, 335, 336, 337, 338, 339
       .word   340, 341, 342, 343, 344, 345, 346, 347, 348, 349, 350, 351, 352, 353, 354, 355, 356, 357, 358, 359
       .word   360, 361, 362, 363, 364, 365, 366, 367, 368, 369, 370, 371, 372, 373, 374, 375, 376, 377, 378, 379
       .word   380, 381, 382, 383, 384, 385, 386, 387, 388, 389, 390, 391, 392, 393, 394, 395, 396, 397, 398, 399
       .word   400, 401, 402, 403, 404, 405, 406, 407, 408, 409, 410, 411, 412, 413, 414, 415, 416, 417, 418, 419
       .word   420, 421, 422, 423, 424, 425, 426, 427, 428, 429, 430, 431, 432, 433, 434, 435, 436, 437, 438, 439
       .word   440, 441, 442, 443, 444, 445, 446, 447, 448, 449, 450, 451, 452, 453, 454, 455, 456, 457, 458, 459
       .word   460, 461, 462, 463, 464, 465, 466, 467, 468, 469, 470, 471, 472, 473, 474, 475, 476, 477, 478, 479
       .word   480, 481, 482, 483, 484, 485, 486, 487, 488, 489, 490, 491, 492, 493, 494, 495, 496, 497, 498, 499
       

nfil:   .word   20 # número de filas de la matriz
ncol:   .word   10 # número de columnas de la matriz

titulo:     .asciiz "\nPráctica PR3 de Principios de Computadores. Manejo de Matrices.\n"
msg_matriz: .asciiz "\nLa matriz es "
msg_x:      .asciiz "x"
separador:  .asciiz "  " # separador entre números
newline:    .asciiz "\n"
menu:       .ascii  "\n(1) Cambiar dimensiones\n(2) Intercambiar dos elemento\n"
            .ascii  "(3) Suma elementos del perimetro\n(4) Calcula max y min de la diagonal\n"
            .asciiz "(0) Salir\n\nElija opcion: "

error_op:   .asciiz "\nError: opcion incorrecta.\n"
msg_nfilas: .asciiz "Introduzca numero de filas: "
msg_ncols:  .asciiz "Introduzca numero de columnas: "
error_nfilas:   .asciiz "\nError: dimension incorrecta. Numero de fila incorrecto.\n"
error_ncols:    .asciiz "\nError: dimension incorrecta. Numero de columna incorrecto.\n"
error_dime:     .asciiz "\nError: dimension incorrecta. Excede el maximo numero de elementos (400).\n"
msg_i:      .asciiz "Introduzca fila del primer elemento a cambiar: "
msg_j:      .asciiz "Introduzca columna del primer elemento a cambiar: "
msg_r:      .asciiz "Introduzca fila del segundo elemento a cambiar: "
msg_s:      .asciiz "Introduzca columna del segundo elemento a cambiar: "
msg_suma:   .asciiz "\n\nSuma de los elementos del perímetro: "
msg_max:    .asciiz "\nEl máximo de la diagonal principal es "
msg_min:    .asciiz " y el mínimo "
msg_fin:    .asciiz "\nFin del programa.\n"



    .text

main:

        li $s0, 400                     # Almacenamos "maximoElementos" en $t0
        li $s1, 20                      # Almacenamos "nfil" en $s1
        li $s2, 10                      # Almacenamos "ncol" en $s2
        la $s3, mat                     # Almacenamos "matriz" en $s3

inicio:


        li $v0, 4
        la $a0, titulo                  # Imprimimos "Práctica PR3 de Principios de Computadores. Matrices." por pantalla
        syscall

mostrar:

        li $v0, 4
        la $a0, msg_matriz              # Imprimimos "La matriz es " por pantalla
        syscall
        li $v0, 1
        move $a0, $s1                   # Mostramos el número de filas por pantalla
        syscall
        li $v0, 4
        la $a0, msg_x                   # Imprimimos "x" por pantalla
        syscall
        li $v0, 1
        move $a0, $s2                   # Mostramos el número de columnas por pantalla
        syscall
        li $v0, 4
        la $a0, newline                 # Cerramos el mensaje con un retorno de carro (\n)
        syscall

        move $t0, $zero                 # Almacenamos el índice de la fila en $t0, y lo inicializamos en 0
        li $t1, size                    # Almacenamos el tamaño de cada elemento en $t1

bforfil1:

        move $t2, $zero                 # Almacenamos el índice de la columna en $t2, y lo inicializamos en 0

bforcol1:

        mul $t3, $t0, $s2               # Multiplicamos el índice de la fila por el número de columnas (f * ncol) y lo almacenamos en $t3
        addu $t3, $t3, $t2              # Sumamos el índice de la columna a $t3 ((f * ncol) + c) y almacenamos el resultado en el mismo registro
        mul $t3, $t3, $t1               # Multiplicamos el resultado anterior por el tamaño del elemento (mat[f * ncol + c])
        addu $t3, $t3, $s3              # Sumamos la base inicial al valor obtenido. En otras palabras, desplazamos el valor obtenido para imprimirlo en pantalla
        lw $t3,0($t3)                   # Realizamos un load word para cargar el valor final en su posición correspondiente de la matriz

        li $v0, 1
        move $a0, $t3                   # Imprimimos el valor anteriormente obtenido por pantalla
        syscall

        li $v0, 4
        la $a0, separador               # Imprimimos el separador entre números ("  ") por pantalla
        syscall

        addi $t2, $t2, 1                # Sumamos uno al índice de columna (es decir, aumentamos en uno la variable de iteración c)
        blt $t2, $s2, bforcol1          # Mientras el índice de columna sea menor que el número total de columnas, repetimos el bucle anidado (for (int c = 0; c < ncol; c++))

        li $v0, 4
        la $a0, newline                 # Empleamos un retorno de carro para finalizar las filas que se impriman
        syscall

        addi $t0, $t0, 1                # Sumamos uno al índice de fila (es decir, aumentamos en uno la variable de iteración f)
        blt $t0, $s1, bforfil1          # Mientras el índice de fila sea menor que el número total de filas, repetimos el bucle (for (int f = 0; f < nfil; f++))

mostrarmenu:

        li $v0, 4
        la $a0, menu                    # Imprimimos el menú en pantalla
        syscall

        li $v0, 5                       # Recibimos la opción introducida por el usuario y almacenamos su valor en $t4
        syscall
        move $t4, $v0

        beq $t4, $zero, fin             # Si la opción escogida es cero, salimos del programa

        blt $t4, $zero, erroreleccion   # Comprobamos que la opción escogida sea mayor o igual a cero. En caso contrario, mostramos un error
        bgt $t4, 4, erroreleccion       # Comprobamos que la opción escogida sea menor o igual a cuatro. En caso contrario, mostramos un error
        j eleccion

erroreleccion:

        li $v0, 4
        la $a0, error_op                # Imprimimos el mensaje de error
        syscall
        j mostrarmenu                   # Volvemos a mostrar el menú en pantalla

eleccion:

        beq $t4, 1, cambio_dimensiones          # Ejecutamos la primera opción si el usuario introduce un 1
        beq $t4, 2, intercambia_elementos       # Ejecutamos la segunda opción si el usuario introduce un 2
        beq $t4, 3, suma_perimetro              # Ejecutamos la tercera opción si el usuario introduce un 3
        beq $t4, 4, maxmin_diagonal             # Ejecutamos la cuarta opción si el usuario introduce un 4



# FASE I: Manejo de matrices - cambio de dimensiones

cambio_dimensiones:       

        li $v0, 4
        la $a0, msg_nfilas              # Imprimimos "Introduzca numero de filas: " por pantalla
        syscall

        li $v0, 5                       # Recibimos el valor de nuevafil introducido por el usuario y lo almacenamos en $t6
        syscall
        move $t6, $v0

        ble $t6, $zero, errorfilas1     # Comprobamos que el nuevo número de filas sea mayor a cero (if (nuevafil <= 0)). En caso contrario, mostramos un error por pantalla
        j numcolumnas

errorfilas1:

        li $v0, 4
        la $a0, error_nfilas            # Imprimimos el mensaje de error de número de filas por pantalla
        syscall
        j mostrar                       # Regresamos al inicio del programa

numcolumnas:

        li $v0, 4
        la $a0, msg_ncols               # Imprimimos "Introduzca numero de columnas: " por pantalla
        syscall

        li $v0, 5                       # Recibimos el valor de nuevacol introducido por el usuario y lo almacenamos en $t7
        syscall
        move $t7, $v0

        ble $t7, $zero, errorcolumnas1  # Comprobamos que el nuevo número de columnas sea mayor a cero (if (nuevacol <= 0)). En caso contrario, mostramos un error por pantalla
        j tamdimension      

errorcolumnas1:

        li $v0, 4
        la $a0, error_ncols             # Imprimimos el mensaje de error de número de filas por pantalla
        syscall
        j mostrar                       # Regresamos al inicio del programa

tamdimension:

        mul $t5, $t6, $t7               # Multiplicamos el nuevo número de filas por el nuevo número de columnas para obtener el tamaño de la dimensión (nuevafil * nuevacol), y almacenamos el resultado en $t5
        bgt $t5, $s0, errordimension    # Comprobamos que la nueva dimensión sea menor o igual al número máximo de elementos (if (nuevafil * nuevacol > maximoElementos)). En caso contrario, mostramos un error por pantalla
        j bdimension

errordimension:

        li $v0, 4
        la $a0, error_dime              # Imprimimos el mensaje de error de tamaño de dimensión por pantalla
        syscall
        j mostrar                       # Regresamos al inicio del programa

bdimension:

        move $s1, $t6                   # Cambiamos el número original de filas por el nuevo (nfil = nuevafil)
        move $s2, $t7                   # Cambiamos el número original de columnas por el nuevo (ncol = nuevacol)
        j mostrar                       # Regresamos al inicio del programa y mostramos la matriz redimensionada por pantalla



# FASE II: Manejo de matrices - intercambio de elementos

intercambia_elementos:

        li $v0, 4
        la $a0, msg_i                           # Imprimimos "Introduzca fila del primer elemento a cambiar: " por pantalla
        syscall

        li $v0, 5                               # Recibimos el valor de la fila del primer elemento a cambiar (primfila) introducido por el usuario y lo almacenamos en $t0
        syscall
        move $t0, $v0

        blt $t0, $zero, errorfilas2             # Comprobamos que el número de la fila del primer elemento sea mayor o igual a cero (if (primfila < 0 || [...]). En caso contrario, mostramos un error por pantalla
        bge $t0, $s1, errorfilas2               # Comprobamos que el número de la fila del primer elemento sea menor al número de filas de la matriz (if ([...] || primfila >= ncol). En caso contrario, mostramos un error por pantalla
        j primcolumna

errorfilas2:

        li $v0, 4
        la $a0, error_nfilas                    # Imprimimos el mensaje de error por pantalla
        syscall
        j mostrar                               # Regresamos al inicio del programa

primcolumna:

        li $v0, 4
        la $a0, msg_j                           # Imprimimos "Introduzca columna del primer elemento a cambiar: " por pantalla
        syscall

        li $v0, 5                               # Recibimos el valor de la columna del primer elemento a cambiar (primcolumna) introducido por el usuario y lo almacenamos en $t1
        syscall
        move $t1, $v0

        blt $t1, $zero, errorcolumnas2          # Comprobamos que el número de la columna del primer elemento sea mayor o igual a cero (if (primcolumna < 0 || [...]). En caso contrario, mostramos un error por pantalla
        bge $t1, $s2, errorcolumnas2            # Comprobamos que el número de la columna del primer elemento sea menor al número de columnas de la matriz (if ([...] || primcolumna >= ncol). En caso contrario, mostramos un error por pantalla
        j segfila

errorcolumnas2:

        li $v0, 4
        la $a0, error_ncols                     # Imprimimos el mensaje de error por pantalla
        syscall
        j mostrar                               # Regresamos al inicio del programa

segfila:

        li $v0, 4
        la $a0, msg_r                           # Imprimimos "Introduzca fila del segundo elemento a cambiar: " por pantalla
        syscall

        li $v0, 5                               # Recibimos el valor de la fila del segundo elemento a cambiar (segfila) introducido por el usuario y lo almacenamos en $t2
        syscall
        move $t2, $v0

        blt $t2, $zero, errorfilas2             # Comprobamos que el número de la fila del segundo elemento sea mayor o igual a cero (if (segfila < 0 || [...]). En caso contrario, mostramos un error por pantalla
        bge $t2, $s1, errorfilas2               # Comprobamos que el número de la fila del segundo elemento sea menor al número de filas de la matriz (if ([...] || segfila >= ncol). En caso contrario, mostramos un error por pantalla

        li $v0, 4
        la $a0, msg_s                           # Imprimimos "Introduzca columna del segundo elemento a cambiar: " por pantalla
        syscall

        li $v0, 5                               # Recibimos el valor de la columna del segundo elemento a cambiar (segcolumna) introducido por el usuario y lo almacenamos en $t2
        syscall
        move $t3, $v0

        blt $t3, $zero, errorcolumnas2          # Comprobamos que el número de la columna del segundo elemento sea mayor o igual a cero (if (segcolumna < 0 || [...]). En caso contrario, mostramos un error por pantalla
        bge $t3, $s2, errorcolumnas2            # Comprobamos que el número de la columna del segundo elemento sea menor al número de columnas de la matriz (if ([...] || segcolumna >= ncol). En caso contrario, mostramos un error por pantalla

#       Intercambio del elemento

        mul $t0, $s2, $t0                       # Multiplicamos el número de la fila del primer elemento por el número de columnas de la matriz (primfila * ncol)
        add $t0, $t0, $t1                       # Sumamos el número de la columna del primer elemento al resultado obtenido ((primfila * ncol) + primcolumna)
        mul $t0, $t0, size                      # Multiplicamos el resultado por el tamaño del elemento (mat[primfila * ncol + primcolumna])
        add $t0, $t0, $s3                       # Sumamos la base inicial al valor obtenido. En otras palabras, desplazamos el valor obtenido para imprimirlo en pantalla
        lw $t4, 0($t0)                          # Realizamos un load word auxiliar para cargar el valor final en su posición correspondiente de la matriz (aux = mat[primfila * ncol + primcolumna])

        mul $t2, $s2, $t2                       # Multiplicamos el número de la fila del segundo elemento por el número de columnas de la matriz (segfila * ncol)
        add $t2, $t2, $t3                       # Sumamos el número de la columna del segundo elemento al resultado obtenido ((segfila * ncol) + segcolumna)
        mul $t2, $t2, size                      # Multiplicamos el resultado por el tamaño del elemento (mat[segfila * ncol + segcolumna])
        add $t2, $t2, $s3                       # Sumamos la base inicial al valor obtenido. En otras palabras, desplazamos el valor obtenido para imprimirlo en pantalla
        lw $t3, 0($t2)                          # Realizamos un load word para cargar el valor final en su posición correspondiente de la matriz (mat[primfila * ncol + primcolumna] = mat[segfila * ncol + segcolumna])
        
        sw $t3, 0($t0)                          # Realizamos un save word para cargar la posición del valor anterior

        sw $t4, 0($t2)                          # Realizamos un segundo save word para mover el primer elemento a la posición del segundo (mat[segfila * ncol + segcolumna] = aux)
        j mostrar                               # Regresamos al inicio del programa



# FASE III: Manejo de matrices - suma del perímetro

suma_perimetro:

        move $s4, $zero                         # Inicializamos la variable de perímetro en 0
        move $t5, $zero                         # Inicializamos la variable de iteración perifil en 0

        li $t6, size                            # Almacenamos el tamaño del elemento en $t6

bforperifil:

        move $t7, $zero                         # Inicializamos la variable de iteración pericol en 0

bforpericol:

        mul $t0, $t5, $s2                       # Multiplicamos la variable de iteración perifil por el número de columnas de la matriz (perifil * ncol) y almacenamos el resultado en $t0
        add $t0, $t0, $t7                       # Sumamos al resultado anterior la variable de iteración pericol ((perifil * ncol) + pericol)
        mul $t0, $t0, $t6                       # Multiplicamos el valor obtenido por el tamaño del elemento (mat[perifil * ncol + pericol])
        add $t0, $t0, $s3                       # Sumamos la base inicial al valor obtenido. En otras palabras, desplazamos el valor obtenido para imprimirlo en pantalla
        lw $t0, 0($t0)                          # Realizamos un load word para cargar el valor de la suma en $t0

        add $t1, $s1, -1                        # Almacenamos en $t1 el número de filas menos uno (nfil - 1)
        add $t2, $s2, -1                        # Almacenamos en $t2 el número de columnas menos uno (col - 1)
        beq $t5, $zero, sumaperim               # Comprobamos si la variable perifil es igual a cero (if (perifil == 0 || [...]))
        beq $t7, $zero, sumaperim               # Comprobamos si la variable pericol es igual a cero (if ([...] || pericol == 0 || [...]))
        beq $t5, $t1, sumaperim                 # Comprobamos si la variable perifil es igual al número de filas menos uno (if ([...] || perifil == nfil - 1 || [...]))
        beq $t7, $t2, sumaperim                 # Comprobamos si la variable pericol es igual al número de columnas menos uno (if ([...] || pericol == ncol - 1))
        j continuacion_perimetro

sumaperim:

        add $s4, $s4, $t0                       # Sumamos a la variable perímetro el valor de la suma almacenada en $t0 (perimetro += mat[perifil * ncol + pericol])

continuacion_perimetro:

        addi $t7, $t7, 1                        # Sumamos uno a la variable pericol para completar una iteración
        blt $t7, $s2, bforpericol               # Regresamos al inicio del bucle anidado mientras la variable pericol sea menor que el número total de columnas (for (int pericol = 0; pericol < ncol; pericol++))

        addi $t5, $t5, 1                        # Sumamos uno a la variable perifil para completar una iteración
        blt $t5, $s1, bforperifil               # Regresamos al inicio del bucle mientras la variable perifil sea menor que el número total de filas (for (int perifil = 0; perifil < nfil; perifil++))

        li $v0, 4
        la $a0, msg_suma                        # Imprimimos "\n\nSuma de los elementos del perímetro: "
        syscall

        li $v0, 1
        move $a0, $s4                           # Imprimimos el resultado de la suma del perímetro almacenado en el registro salvado $s4
        syscall

        j mostrar                               # Regresamos al inicio del programa



# FASE IV: Manejo de matrices - mínimo y máximo de la diagonal principal

maxmin_diagonal:

        li $t3, 500                             # Cargamos directamente el valor 500 en la variable minimo (int minimo = 500)
        li $t4, 0                               # Cargamos el valor 0 en la variable maximo (int maximo = 0)

        move $t5, $zero                         # Iniciamos la variable de iteración f (índice de fila) en cero
        li $t6, size                            # Cargamos el tamaño del elemento en la variable $t6

calculomax:

        move $t7, $t5                           # Copiamos el valor de $t5 a una registro auxiliar $t7, equivalente a la variable c (índice de columna, c = f)
        mul $t0, $t5, $s2                       # Multiplicamos la variable de iteración f por el número de columnas de la matriz (f * ncol)
        add $t0, $t0, $t7                       # Sumamos al valor obtenido la variable de iteración c ((f * ncol) + c)
        mul $t0, $t0, $t6                       # Multiplicamos al resultado anterior el tamaño del elemento (mat[f * ncol + c])
        add $t0, $t0, $s3                       # Sumamos la base inicial al valor obtenido. En otras palabras, desplazamos el valor obtenido para imprimirlo en pantalla# Le sumamos a este valor obtenido
        lw $s5, 0($t0)                          # Realizamos un load word para cargar el resultado de la operación anterior en $t0

        blt $s5, $t3, actualizarmin             # Comprobamos si el resultado de estas operaciones es menor que 500. De ser así, se actualiza el mínimo
        j comprobarmax

actualizarmin:

        move $t3, $s5                           # Si el resultado de calculomax es menor que 500, se implica que dicho resultado es el nuevo mínimo, por lo que se almacena su valor en $t3

comprobarmax:

        bgt $s5, $t4, actualizarmax             # Comprobamos si el resultado de estas operaciones es mayor que 0. De ser así, se actualiza el máximo
        j biterarf

actualizarmax:

        move $t4, $s5                           # Si el resultado de calculomax es mayor que 0, se implica que dicho resultado es el nuevo máximo, por lo que se almacena su valor en $t4 

biterarf:

        addi $t5, $t5, 1                        # Sumamos uno a la variable f, completando una iteración
        blt $t5, $s2, calculomax                # Mientras la variable f sea menor que el número de columnas de la matriz, regresamos al inicio del bucle 

        li $v0, 4
        la $a0, msg_max                         # Imprimimos ""El máximo de la diagonal principal es " por pantalla
        syscall

        li $v0, 1
        move $a0, $t4                           # Mostramos el máximo de la diagonal principal por pantalla
        syscall

        li $v0, 4
        la $a0, msg_min                         # Imprimimos " y el minimo " por pantalla 
        syscall

        li $v0, 1
        move $a0, $t3                           # Mostramos el mínimo de la diagonal principal por pantalla
        syscall

        j mostrar                               # Regresamos al inicio del programa

fin:

        li $v0, 4
        la $a0, msg_fin                         # Imprimimos "Fin del programa." por pantalla
        syscall

        li $v0, 10                              # Fin del programa
        syscall