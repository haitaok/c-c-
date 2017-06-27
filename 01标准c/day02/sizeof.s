	.file	"sizeof.c"
	.section	.rodata
.LC0:
	.string	"%i\n"
.LC1:
	.string	"***%i\n"
.LC2:
	.string	"n=%i\n"
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
	movl	$10, -4(%rbp)
	movl	$4, %esi
	movl	$.LC0, %edi
	movl	$0, %eax
	call	printf
	movl	$4, %esi
	movl	$.LC0, %edi
	movl	$0, %eax
	call	printf
	movl	$4, %esi
	movl	$.LC1, %edi
	movl	$0, %eax
	call	printf
	movl	$8, %esi
	movl	$.LC0, %edi
	movl	$0, %eax
	call	printf
	movl	$4, %esi
	movl	$.LC0, %edi
	movl	$0, %eax
	call	printf
	movl	-4(%rbp), %eax
	movl	%eax, %esi
	movl	$.LC2, %edi
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
