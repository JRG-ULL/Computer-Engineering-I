intercambia:
# Pila
	addi	$sp, $sp, -4
	sw	$ra, 0($sp)
# void intercambia(structMat* mat, int indF, int indC) {
#   int numCol = mat->nCol;
	lw	$s5, 4($a1)
#   int numFil = mat->nFil;
    	lw	$s6, 0($a1)
	addi	$a1, $a1, 8
#   float* datos = mat->elementos;
#   float* e1 = &datos[indF * numCol + indC];
	mul	$t0, $a2, $s5
	addu	$t0, $t0, $a3
	mul	$t0, $t0, sizeF
	addu	$t0, $t0, $a1
#   float* e2 = &datos[(numFil - indF - 1) * numCol + (numCol - indC - 1)];
	sub	$t1, $s6, $a2
	addi	$t1, $t1, -1
	mul	$t1, $t1, $s5
	sub	$t2, $s5, $a3
	addi	$t2, $t2, -1
	addu	$t1, $t1, $t2
	mul	$t1, $t1, sizeF
	addu	$t1, $t1, $a1

	move	$a0, $t0
	move	$a1, $t1
#   swap(e1, e2);
    	jal swap
# }
	lw	$ra, 0($sp)
	addi	$sp, $sp, 4
	jr	$ra
intercambia_fin: 