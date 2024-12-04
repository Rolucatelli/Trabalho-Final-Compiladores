.text
	.globl main
main:	nop
	li $v0, 5
	syscall
	sw $v0, a
L1:	nop
	lw $a0 a
	sw $a0 0($sp)
	addiu $sp $sp -4
	li $a0 0
	lw $t1 4($sp)
	addiu $sp $sp 4
	slt $a0, $a0, $t1
	beqz $a0, L2
	lw $a0 a
	li $v0, 1
	syscall
	la $a0 _ent
	li $v0, 4
	syscall
	lw $a0 a
	sw $a0 0($sp)
	addiu $sp $sp -4
	li $a0 1
	lw $t1 4($sp)
	addiu $sp $sp 4
	sub $a0, $t1, $a0
	sw $a0, a
	j L1
L2:	nop
fim:	nop
	li $v0, 10
	li $a0, 0
	syscall
.data
	a: .word 1
	b: .word 1
	c: .word 1
	_esp: .asciiz " "
	_ent: .asciiz "\n"
