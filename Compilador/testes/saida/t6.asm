.text
	.globl main
main:	nop
	li $v0, 5
	syscall
	sw $v0, n
	li $a0 2
	sw $a0 0($sp)
	addiu $sp $sp -4
	lw $a0 n
	lw $t1 4($sp)
	addiu $sp $sp 4
	mult $t1, $a0
	mflo $a0
	li $v0, 1
	syscall
	la $a0 _ent
	li $v0, 4
	syscall
fim:	nop
	li $v0, 10
	li $a0, 0
	syscall
.data
	n: .word 1
	_esp: .asciiz " "
	_ent: .asciiz "\n"
