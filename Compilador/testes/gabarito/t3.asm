.text
	.globl main
main:	nop
	li $a0 1
	sw $a0, A
L1:	nop
	lw $a0 A
	sw $a0 0($sp)
	addiu $sp $sp -4
	li $a0 10
	lw $t1 4($sp)
	addiu $sp $sp 4
	slt $a0, $t1, $a0
	beqz $a0, L2
	lw $a0 A
	li $v0, 1
	syscall
	la $a0 _ent
	li $v0, 4
	syscall
	lw $a0 A
	sw $a0 0($sp)
	addiu $sp $sp -4
	li $a0 1
	lw $t1 4($sp)
	addiu $sp $sp 4
	add $a0, $t1, $a0
	sw $a0, A
	j L1
L2:	nop
fim:	nop
	li $v0, 10
	li $a0, 0
	syscall
.data
	A: .word 1
	_esp: .asciiz " "
	_ent: .asciiz "\n"
