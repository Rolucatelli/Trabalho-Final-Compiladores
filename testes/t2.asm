.text
	.globl main
main:	nop
	li $v0, 5
	syscall
	sw $v0, a
	lw $a0 a
	sw $a0 0($sp)
	addiu $sp $sp -4
	li $a0 10
	lw $t1 4($sp)
	addiu $sp $sp 4
	add $a0, $t1, $a0
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
	a: .word 1
	_esp: .asciiz " "
	_ent: .asciiz "\n"
