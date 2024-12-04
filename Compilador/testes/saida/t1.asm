.text
	.globl main
main:	nop
	li $v0, 5
	syscall
	sw $v0, C
	li $v0, 5
	syscall
	sw $v0, B
	li $a0 10
	sw $a0 0($sp)
	addiu $sp $sp -4
	lw $a0 C
	sw $a0 0($sp)
	addiu $sp $sp -4
	lw $a0 B
	lw $t1 4($sp)
	addiu $sp $sp 4
	add $a0, $t1, $a0
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
	A: .word 1
	B: .word 1
	C: .word 1
	D: .word 1
	_esp: .asciiz " "
	_ent: .asciiz "\n"
