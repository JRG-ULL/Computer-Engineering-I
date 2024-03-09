# RETO PRÁCTICO. PRINCIPIOS DE COMPUTADORES
# Autor: Rodríguez González, Javier (alu0101563428@ull.edu.es)
# Fecha última modificación: 20 Feb. 2024

# TABLA DE REGISTROS
# ---------------------
# Variable de comprobación      = $f6
# Suma de lados                 = $f8
# Lado 1                        = $f20
# Lado 2                        = $f22
# Lado 3                        = $f26
        .data

cadtitle:       .asciiz "\nReto práctico: Principios de computadores.\n"
cadsides:       .asciiz "\nIntroduce los lados de un triángulo: "
cadequi:        .asciiz "\nEl triángulo introducido es equilátero."
cadisos:        .asciiz "\nEl triángulo introducido es isósceles."
cadesca:        .asciiz "\nEl triángulo introducido es escaleno."
caderr:         .asciiz "\nERROR: No se trata de un triángulo. Por favor, reintroduce los lados: "
cadfin:        .asciiz "\nFin del programa."

        .text

main:
        # std::cout << "Reto práctico: Principios de computadores." << std::endl;
        li      $v0, 4
        la      $a0, cadtitle
        syscall

        #std::cout << "Introduce los lados de un triángulo." << std::endl;
        li      $v0, 4
        la      $a0, cadsides
        syscall

sides:
        # std::cin >> side1;
        li      $v0, 7
        syscall
        mov.d   $f20, $f0
        # std::cin >> side2;
        li      $v0, 7
        syscall
        mov.d   $f22, $f0
        # std::cin >> side3;
        li      $v0, 7
        syscall
        mov.d   $f26, $f0
        
        # if ((side1 + side2) >= side3)
        add.d   $f6, $f20, $f22
        c.le.d  $f26, $f6
        bc1t    not_triangle
        # if ((side2 + side3) >= side1)
        add.d   $f6, $f22, $f26
        c.le.d  $f20, $f6
        bc1t    not_triangle
        # if ((side1 + side3) >= side2)
        add.d   $f6, $f20, $f26
        c.lt.d  $f22, $f6
        bc1t    not_triangle  
        
        # if (side1 == side2 || side2 == side3 || side1 == side3) {
        c.eq.d  $f20, $f22
        bc1t    equi_12
        c.eq.d  $f20, $f26
        bc1t    equi_13
        c.eq.d  $f22, $f26
        bc1t    equi_23

        li      $v0, 4
        la      $a0, cadesca
        syscall

        j       fin

equi_12:
        c.eq.d  $f20, $f26
        bc1t    equilateral

        li      $v0, 4
        la      $a0, cadisos
        syscall

        j       fin

equi_13:
       c.eq.d  $f20, $f22
        bc1t    equilateral

        li      $v0, 4
        la      $a0, cadisos
        syscall

        j       fin

equi_23:
        c.eq.d  $f22, $f20
        bc1t    equilateral

        li      $v0, 4
        la      $a0, cadisos
        syscall

        j       fin

equilateral:
        li      $v0, 4
        la      $a0, cadequi
        syscall

        j       fin
        
not_triangle:
        li      $v0, 4
        la      $a0, caderr
        syscall

        j       sides

fin:
        # std::cout << "Fin del programa." << std::endl;
        li      $v0, 4
        la      $a0, cadfin
        syscall
        # return 0;
        # }
        li      $v0, 10
        syscall