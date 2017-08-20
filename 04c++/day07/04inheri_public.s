	.file	"04inheri_public.cpp"
	.section	.rodata
	.type	_ZStL19piecewise_construct, @object
	.size	_ZStL19piecewise_construct, 1
_ZStL19piecewise_construct:
	.zero	1
	.local	_ZStL8__ioinit
	.comm	_ZStL8__ioinit,1,1
.LC0:
	.string	"funprotected()"
	.section	.text._ZN1A12funprotectedEv,"axG",@progbits,_ZN1A12funprotectedEv,comdat
	.align 2
	.weak	_ZN1A12funprotectedEv
	.type	_ZN1A12funprotectedEv, @function
_ZN1A12funprotectedEv:
.LFB1459:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$16, %rsp
	movq	%rdi, -8(%rbp)
	movl	$.LC0, %esi
	movl	$_ZSt4cout, %edi
	call	_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
	movl	$_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_, %esi
	movq	%rax, %rdi
	call	_ZNSolsEPFRSoS_E
	nop
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE1459:
	.size	_ZN1A12funprotectedEv, .-_ZN1A12funprotectedEv
	.section	.rodata
.LC1:
	.string	"funpublic()"
	.section	.text._ZN1A9funpublicEv,"axG",@progbits,_ZN1A9funpublicEv,comdat
	.align 2
	.weak	_ZN1A9funpublicEv
	.type	_ZN1A9funpublicEv, @function
_ZN1A9funpublicEv:
.LFB1460:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$16, %rsp
	movq	%rdi, -8(%rbp)
	movl	$.LC1, %esi
	movl	$_ZSt4cout, %edi
	call	_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
	movl	$_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_, %esi
	movq	%rax, %rdi
	call	_ZNSolsEPFRSoS_E
	nop
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE1460:
	.size	_ZN1A9funpublicEv, .-_ZN1A9funpublicEv
	.section	.text._ZN1A4getAEv,"axG",@progbits,_ZN1A4getAEv,comdat
	.align 2
	.weak	_ZN1A4getAEv
	.type	_ZN1A4getAEv, @function
_ZN1A4getAEv:
.LFB1461:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	movq	%rdi, -8(%rbp)
	movq	-8(%rbp), %rax
	movl	(%rax), %eax
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE1461:
	.size	_ZN1A4getAEv, .-_ZN1A4getAEv
	.section	.text._ZN1A4setAEi,"axG",@progbits,_ZN1A4setAEi,comdat
	.align 2
	.weak	_ZN1A4setAEi
	.type	_ZN1A4setAEi, @function
_ZN1A4setAEi:
.LFB1462:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	movq	%rdi, -8(%rbp)
	movl	%esi, -12(%rbp)
	movq	-8(%rbp), %rax
	movl	-12(%rbp), %edx
	movl	%edx, (%rax)
	nop
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE1462:
	.size	_ZN1A4setAEi, .-_ZN1A4setAEi
	.section	.text._ZN1B14showAprotectedEv,"axG",@progbits,_ZN1B14showAprotectedEv,comdat
	.align 2
	.weak	_ZN1B14showAprotectedEv
	.type	_ZN1B14showAprotectedEv, @function
_ZN1B14showAprotectedEv:
.LFB1463:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$16, %rsp
	movq	%rdi, -8(%rbp)
	movq	-8(%rbp), %rax
	movq	%rax, %rdi
	call	_ZN1A12funprotectedEv
	nop
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE1463:
	.size	_ZN1B14showAprotectedEv, .-_ZN1B14showAprotectedEv
	.section	.text._ZN1B12showAprivateEv,"axG",@progbits,_ZN1B12showAprivateEv,comdat
	.align 2
	.weak	_ZN1B12showAprivateEv
	.type	_ZN1B12showAprivateEv, @function
_ZN1B12showAprivateEv:
.LFB1464:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$16, %rsp
	movq	%rdi, -8(%rbp)
	movq	-8(%rbp), %rax
	movq	%rax, %rdi
	call	_ZN1A4getAEv
	movl	%eax, %esi
	movl	$_ZSt4cout, %edi
	call	_ZNSolsEi
	movl	$_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_, %esi
	movq	%rax, %rdi
	call	_ZNSolsEPFRSoS_E
	nop
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE1464:
	.size	_ZN1B12showAprivateEv, .-_ZN1B12showAprivateEv
	.text
	.globl	_Z13useFriendShowv
	.type	_Z13useFriendShowv, @function
_Z13useFriendShowv:
.LFB1465:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$16, %rsp
	leaq	-4(%rbp), %rax
	movq	%rax, %rdi
	call	_ZN1A12funprotectedEv
	nop
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE1465:
	.size	_Z13useFriendShowv, .-_Z13useFriendShowv
	.globl	main
	.type	main, @function
main:
.LFB1466:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$16, %rsp
	leaq	-4(%rbp), %rax
	movq	%rax, %rdi
	call	_ZN1A9funpublicEv
	leaq	-4(%rbp), %rax
	movq	%rax, %rdi
	call	_ZN1B14showAprotectedEv
	movl	$4, %esi
	movl	$_ZSt4cout, %edi
	call	_ZNSolsEm
	movl	$_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_, %esi
	movq	%rax, %rdi
	call	_ZNSolsEPFRSoS_E
	movl	$4, %esi
	movl	$_ZSt4cout, %edi
	call	_ZNSolsEm
	movl	$_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_, %esi
	movq	%rax, %rdi
	call	_ZNSolsEPFRSoS_E
	leaq	-4(%rbp), %rax
	movl	$1, %esi
	movq	%rax, %rdi
	call	_ZN1A4setAEi
	leaq	-4(%rbp), %rax
	movq	%rax, %rdi
	call	_ZN1B12showAprivateEv
	call	_Z13useFriendShowv
	movl	$0, %eax
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE1466:
	.size	main, .-main
	.type	_Z41__static_initialization_and_destruction_0ii, @function
_Z41__static_initialization_and_destruction_0ii:
.LFB1911:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$16, %rsp
	movl	%edi, -4(%rbp)
	movl	%esi, -8(%rbp)
	cmpl	$1, -4(%rbp)
	jne	.L13
	cmpl	$65535, -8(%rbp)
	jne	.L13
	movl	$_ZStL8__ioinit, %edi
	call	_ZNSt8ios_base4InitC1Ev
	movl	$__dso_handle, %edx
	movl	$_ZStL8__ioinit, %esi
	movl	$_ZNSt8ios_base4InitD1Ev, %edi
	call	__cxa_atexit
.L13:
	nop
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE1911:
	.size	_Z41__static_initialization_and_destruction_0ii, .-_Z41__static_initialization_and_destruction_0ii
	.type	_GLOBAL__sub_I__Z13useFriendShowv, @function
_GLOBAL__sub_I__Z13useFriendShowv:
.LFB1912:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	movl	$65535, %esi
	movl	$1, %edi
	call	_Z41__static_initialization_and_destruction_0ii
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE1912:
	.size	_GLOBAL__sub_I__Z13useFriendShowv, .-_GLOBAL__sub_I__Z13useFriendShowv
	.section	.init_array,"aw"
	.align 8
	.quad	_GLOBAL__sub_I__Z13useFriendShowv
	.hidden	__dso_handle
	.ident	"GCC: (GNU) 6.4.1 20170727 (Red Hat 6.4.1-1)"
	.section	.note.GNU-stack,"",@progbits
