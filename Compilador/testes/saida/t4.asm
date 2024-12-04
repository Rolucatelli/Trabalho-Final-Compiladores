.text
	.globl main
main:	nop
	li $v0, 5
	syscall
	sw $v0, A
	li $v0, 5
	syscall
	sw $v0, B
	lw $a0 A
	sw $a0 0($sp)
	addiu $sp $sp -4
	lw $a0 B
	lw $t1 4($sp)
	addiu $sp $sp 4
	slt $a0, $a0, $t1
	beqz $a0, L1
	lw $a0 A
	li $v0, 1
	syscall
	la $a0 _ent
	li $v0, 4
	syscall
	j L2
L1:	nop
	lw $a0 B
	li $v0, 1
	syscall
	la $a0 _ent
	li $v0, 4
	syscall
L2:	nop
fim:	nop
	li $v0, 10
	li $a0, 0
	syscall
.data
	A: .word 1
	B: .word 1
	_esp: .asciiz " "
	_ent: .asciiz "\n"
