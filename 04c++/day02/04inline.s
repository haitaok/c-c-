	.file	"04inline.cpp"
	.text
	.p2align 4,,15
	.globl	_Z6getminii
	.type	_Z6getminii, @function
_Z6getminii:
.LFB1483:
	.cfi_startproc
	cmpl	%esi, %edi
	movl	%esi, %eax
	cmovle	%edi, %eax
	ret
	.cfi_endproc
.LFE1483:
	.size	_Z6getminii, .-_Z6getminii
	.section	.text.startup,"ax",@progbits
	.p2align 4,,15
	.globl	main
	.type	main, @function
main:
.LFB1484:
	.cfi_startproc
	xorl	%eax, %eax
	ret
	.cfi_endproc
.LFE1484:
	.size	main, .-main
	.p2align 4,,15
	.type	_GLOBAL__sub_I__Z6getminii, @function
_GLOBAL__sub_I__Z6getminii:
.LFB1921:
	.cfi_startproc
	subq	$8, %rsp
	.cfi_def_cfa_offset 16
	movl	$_ZStL8__ioinit, %edi
	call	_ZNSt8ios_base4InitC1Ev
	movl	$__dso_handle, %edx
	movl	$_ZStL8__ioinit, %esi
	movl	$_ZNSt8ios_base4InitD1Ev, %edi
	addq	$8, %rsp
	.cfi_def_cfa_offset 8
	jmp	__cxa_atexit
	.cfi_endproc
.LFE1921:
	.size	_GLOBAL__sub_I__Z6getminii, .-_GLOBAL__sub_I__Z6getminii
	.section	.init_array,"aw"
	.align 8
	.quad	_GLOBAL__sub_I__Z6getminii
	.local	_ZStL8__ioinit
	.comm	_ZStL8__ioinit,1,1
	.hidden	__dso_handle
	.ident	"GCC: (GNU) 6.4.1 20170727 (Red Hat 6.4.1-1)"
	.section	.note.GNU-stack,"",@progbits
