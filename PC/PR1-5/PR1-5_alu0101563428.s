# AUTOR:        Rodríguez González, Javier
# FECHA:        29 feb. 2024
# E-MAIL:       alu0101563428@ull.edu.es

 CÓDIGO EN C++
# ---------------------
# #include<iostream>
# int main(void) {
#     double numero,sumapos,sumaneg;
#     int cuentanum;

#     std::cout << "\nSuma de doubles positivos y negativos.\n";
#     std::cout << "Introduzca doubles positivos y negativos (0 para salir):\n";
#     sumapos = 0;
#     sumaneg = 0;
#     cuentanum = 0;
#     do {
#         std::cin >> numero;
#         if (numero > 0 ) {
#             sumapos+=numero;
#             cuentanum++;
#         } else if ( numero < 0 ) {
#             sumaneg+=numero;
#             cuentanum++;
#         }     
#     } while (numero != 0);
#     std::cout << "\nSuma de positivos = " << sumapos;
#     std::cout << "\nSuma de negativos = " << sumaneg;
#     std::cout << "\nTotal de numeros introducidos = " << cuentanum;
#     if (sumapos > -sumaneg) 
#             std::cout << "\nLos números positivos suman más en valor absoluto";    
#     else if (-sumaneg > sumapos) 
#             std::cout << "\nLos números negativos suman más en valor absoluto";    

#     std::cout << "\nFIN DEL PROGRAMA.\n";
#     return(0);
# }

# TABLA DE REGISTROS
# ---------------------
# numero        = $f20
# sumapos       = $f22
# sumaneg       = $f24
# cuentanum     = $s0
# condición 0   = $f8
# -1 auxiliar   = $f6

        .data
titulo:         .asciiz "\nSuma de doubles positivos y negativos.\n"
cadpet:         .asciiz "Introduzca doubles positivos y negativos (0 para salir):\n"
cadsp:          .asciiz "\nSuma de positivos = "
cadsn:          .asciiz "\nSuma de negativos = "
cadtot:         .asciiz "\nTotal de numeros introducidos = "
cadpos:         .asciiz "\nLos números positivos suman más en valor absoluto"
cadneg:         .asciiz "\nLos números negativos suman más en valor absoluto"
cadfin:         .asciiz "\nFIN DEL PROGRAMA.\n"

        .text
main:
        # Introducción al programa:
        #
        # int main(void) {
        # std::cout << "\nSuma de doubles positivos y negativos.\n";
        li      $v0, 4
        la      $a0, titulo
        syscall

        # std::cout << "Introduzca doubles positivos y negativos (0 para salir):\n";
        li      $v0, 4
        la      $a0, cadpet
        syscall

        # double sumapos = 0
        li.d    $f22, 0.0
        # double sumaneg = 0
        li.d    $f24, 0.0
        # int cuentanum = 0
        move    $s0, $zero
        # do {
dowhile:
        # std::cin >> numero;
        li      $v0, 7
        syscall
        mov.d   $f20, $f0

        li.d    $f8, 0.0
        # Primera condición: numero > 0
        c.lt.d  $f8, $f20
        bc1t    cond_if
        # Segunda condición: numero < 0
        c.lt.d  $f20, $f8
        bc1t    cond_else
        # 0 para salir:
        c.eq.d  $f20, $f8
        bc1t    sums

        # if (numero > 0) {
cond_if:
        # sumapos += numero;
        add.d   $f22, $f22, $f20
        # cuentanum++;
        addi    $s0, 1
        j       dowhile
        # }

        # else if (numero < 0) {
cond_else:
        # sumaneg += numero;
        add.d   $f24, $f24, $f20
        # cuentanum++;
        addi    $s0, 1
        j       dowhile
        # }
        # } while (numero != 0);

sums:
        # std::cout << "\nSuma de positivos = "
        li      $v0, 4
        la      $a0, cadsp
        syscall
        # << sumapos;
        li      $v0, 3
        mov.d   $f12, $f22
        syscall

        # std::cout << "\nSuma de negativos = "
        li      $v0, 4
        la      $a0, cadsn
        syscall
        # << sumaneg;
        li      $v0, 3
        mov.d   $f12, $f24
        syscall

        # std::cout << "\nTotal de numeros introducidos: "
        li      $v0, 4
        la      $a0, cadtot
        syscall
        # << cuentanum;
        li      $v0, 1
        move    $a0, $s0
        syscall

        li.d    $f6, -1.0
        # $f6 = -sumaneg
        mul.d   $f6, $f6, $f24
        # Primera condición: sumapos > -sumaneg
        c.lt.d  $f6, $f22
        bc1t    abs_pos
        # Segunda condición: -sumaneg > sumapos
        c.lt.d  $f22, $f6
        bc1t    abs_neg
        j       fin

        # if (sumapos > -sumaneg) {
abs_pos:
        # std::cout << "\nLos números positivos suman más en valor absoluto";
        li      $v0, 4
        la      $a0, cadpos
        syscall
        # }
        j       fin

        # else if (-sumaneg > sumapos) {
abs_neg:
        # std::cout << "\nLos números negativos suman más en valor absoluto";
        li      $v0, 4
        la      $a0, cadneg
        syscall
        # }

fin:
        # std::cout << "\nFIN DEL PROGRAMA.\n";
        li      $v0, 4
        la      $a0, cadfin
        syscall
        
        # return (0);
        li      $v0, 10
        syscall
        # }
