.text
	.globl main
main:	nop
	li $v0, 5
	syscall
	sw $v0, num1
	li $v0, 5
	syscall
	sw $v0, num2
L1:	nop
	lw $a0 num1
	sw $a0 0($sp)
	addiu $sp $sp -4
	lw $a0 num2
	lw $t1 4($sp)
	addiu $sp $sp 4
	beq $a0, $t1, L2
	li $a0, 0
	j L3
L2:	li $a0, 1
L3:	nop
	beqz $a0, L4
	li $a0, 0
	j L5
L4:	li $a0, 1
L5:	nop
	beqz $a0, L6
	lw $a0 num1
	sw $a0 0($sp)
	addiu $sp $sp -4
	lw $a0 num2
	lw $t1 4($sp)
	addiu $sp $sp 4
	slt $a0, $a0, $t1
	beqz $a0, L7
	lw $a0 num1
	sw $a0 0($sp)
	addiu $sp $sp -4
	lw $a0 num2
	lw $t1 4($sp)
	addiu $sp $sp 4
	sub $a0, $t1, $a0
	sw $a0, num1
	j L8
L7:	nop
	lw $a0 num2
	sw $a0 0($sp)
	addiu $sp $sp -4
	lw $a0 num1
	lw $t1 4($sp)
	addiu $sp $sp 4
	sub $a0, $t1, $a0
	sw $a0, num2
L8:	nop
	j L1
L6:	nop
	lw $a0 num1
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
	num1: .word 1
	num2: .word 1
	X: .word 1
	_esp: .asciiz " "
	_ent: .asciiz "\n"
