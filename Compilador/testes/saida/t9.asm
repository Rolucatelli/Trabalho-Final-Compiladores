.text
	.globl main
main:	nop
	la $a0 _const0
	li $v0, 4
	syscall
	li $v0, 5
	syscall
	sw $v0, base
	la $a0 _const1
	li $v0, 4
	syscall
	li $v0, 5
	syscall
	sw $v0, expoente
	li $a0 1
	sw $a0, potencia
L1:	nop
	lw $a0 expoente
	sw $a0 0($sp)
	addiu $sp $sp -4
	li $a0 0
	lw $t1 4($sp)
	addiu $sp $sp 4
	slt $a0, $a0, $t1
	beqz $a0, L2
	lw $a0 potencia
	sw $a0 0($sp)
	addiu $sp $sp -4
	lw $a0 base
	lw $t1 4($sp)
	addiu $sp $sp 4
	mult $t1, $a0
	mflo $a0
	sw $a0, potencia
	lw $a0 expoente
	sw $a0 0($sp)
	addiu $sp $sp -4
	li $a0 1
	lw $t1 4($sp)
	addiu $sp $sp 4
	sub $a0, $t1, $a0
	sw $a0, expoente
	j L1
L2:	nop
	la $a0 _const2
	li $v0, 4
	syscall
	lw $a0 potencia
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
	base: .word 1
	expoente: .word 1
	potencia: .word 1
	_esp: .asciiz " "
	_ent: .asciiz "\n"
	_const0: .asciiz "Digite a base: "
	_const1: .asciiz "Digite o expoente: "
	_const2: .asciiz "Potencia (base^expoente) = "
