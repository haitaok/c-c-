	.file	"logic.c"
	.section	.rodata
.LC0:
	.string	"%d,%d,%d\n"
.LC1:
	.string	"%d,%d\n"
	.text
	.globl	main
	.type	main, @function
main:
.LFB0:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$16, %rsp
	movl	$3, -4(%rbp)
	movl	$5, -8(%rbp)
	cmpl	$2, -4(%rbp)
	setg	%al
	movzbl	%al, %ecx
	movl	-4(%rbp), %eax
	cmpl	-8(%rbp), %eax
	setge	%al
	movzbl	%al, %edx
	movl	-4(%rbp), %eax
	cmpl	-8(%rbp), %eax
	setle	%al
	movzbl	%al, %eax
	movl	%eax, %esi
	movl	$.LC0, %edi
	movl	$0, %eax
	call	printf
	movl	$-3, -4(%rbp)
	cmpl	$0, -4(%rbp)
	js	.L2
	cmpl	$100, -4(%rbp)
	jg	.L2
	movl	$1, %eax
	jmp	.L3
.L2:
	movl	$0, %eax
.L3:
	movl	$1, %edx
	movl	%eax, %esi
	movl	$.LC1, %edi
	movl	$0, %eax
	call	printf
	cmpl	$0, -8(%rbp)
	js	.L4
	cmpl	$100, -8(%rbp)
	jle	.L5
.L4:
	movl	$1, %edx
	jmp	.L6
.L5:
	movl	$0, %edx
.L6:
	cmpl	$0, -4(%rbp)
	js	.L7
	cmpl	$100, -4(%rbp)
	jle	.L8
.L7:
	movl	$1, %eax
	jmp	.L9
.L8:
	movl	$0, %eax
.L9:
	movl	%eax, %esi
	movl	$.LC1, %edi
	movl	$0, %eax
	call	printf
	movl	$0, %eax
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE0:
	.size	main, .-main
	.ident	"GCC: (GNU) 6.2.1 20160916 (Red Hat 6.2.1-2)"
	.section	.note.GNU-stack,"",@progbits
