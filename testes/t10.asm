.text
	.globl main
main:	nop
	la $a0 _const0
	li $v0, 4
	syscall
	li $v0, 5
	syscall
	sw $v0, A
	la $a0 _const1
	li $v0, 4
	syscall
	li $v0, 5
	syscall
	sw $v0, B
	la $a0 _const2
	li $v0, 4
	syscall
	li $v0, 5
	syscall
	sw $v0, C
	la $a0 _const3
	li $v0, 4
	syscall
	lw $a0 A
	sw $a0 0($sp)
	addiu $sp $sp -4
	lw $a0 B
	lw $t1 4($sp)
	addiu $sp $sp 4
	slt $a0, $a0, $t1
	sw $a0 0($sp)
	addiu $sp $sp -4
	lw $a0 A
	sw $a0 0($sp)
	addiu $sp $sp -4
	lw $a0 C
	lw $t1 4($sp)
	addiu $sp $sp 4
	slt $a0, $a0, $t1
	lw $t1 4($sp)
	addiu $sp $sp 4
	beqz $a0, L1
	beqz $t1, L1
	li $a0, 1
	j L2
L1:	li $a0, 0
L2:	nop
	beqz $a0, L3
	lw $a0 A
	li $v0, 1
	syscall
	la $a0 _ent
	li $v0, 4
	syscall
	j L4
L3:	nop
	lw $a0 B
	sw $a0 0($sp)
	addiu $sp $sp -4
	lw $a0 C
	lw $t1 4($sp)
	addiu $sp $sp 4
	slt $a0, $a0, $t1
	beqz $a0, L5
	lw $a0 B
	li $v0, 1
	syscall
	la $a0 _ent
	li $v0, 4
	syscall
	j L6
L5:	nop
	lw $a0 C
	li $v0, 1
	syscall
	la $a0 _ent
	li $v0, 4
	syscall
L6:	nop
L4:	nop
fim:	nop
	li $v0, 10
	li $a0, 0
	syscall
.data
	A: .word 1
	B: .word 1
	C: .word 1
	_esp: .asciiz " "
	_ent: .asciiz "\n"
	_const0: .asciiz "Digite o valor de A: "
	_const1: .asciiz "Digite o valor de B: "
	_const2: .asciiz "Digite o valor de C: "
	_const3: .asciiz "O maior dos tres eh: "
