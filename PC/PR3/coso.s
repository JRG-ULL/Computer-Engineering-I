# FUNCIÓN V: find_min (encontrar mínimo)
# ---------------------
# Función que busca y guarda el mínimo de la matriz actual de trabajo, así como los índices
# de fila y columna que designan la posición de dicho mínimo.

# ARGUMENTOS Y REGISTROS DE RETORNO
# ---------------------
# structMat* mat		= $a0

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