	.file	"02this.cpp"
	.section	.rodata
	.type	_ZStL19piecewise_construct, @object
	.size	_ZStL19piecewise_construct, 1
_ZStL19piecewise_construct:
	.zero	1
	.local	_ZStL8__ioinit
	.comm	_ZStL8__ioinit,1,1
.LC0:
	.string	"Animal()"
	.section	.text._ZN6AnimalC2ENSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEi,"axG",@progbits,_ZN6AnimalC5ENSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEi,comdat
	.align 2
	.weak	_ZN6AnimalC2ENSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEi
	.type	_ZN6AnimalC2ENSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEi, @function
_ZN6AnimalC2ENSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEi:
.LFB1459:
	.cfi_startproc
	.cfi_personality 0x3,__gxx_personality_v0
	.cfi_lsda 0x3,.LLSDA1459
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	pushq	%rbx
	subq	$40, %rsp
	.cfi_offset 3, -24
	movq	%rdi, -24(%rbp)
	movq	%rsi, -32(%rbp)
	movl	%edx, -36(%rbp)
	movq	-24(%rbp), %rax
	movq	-32(%rbp), %rdx
	movq	%rdx, %rsi
	movq	%rax, %rdi
.LEHB0:
	call	_ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEC1ERKS4_
.LEHE0:
	movq	-24(%rbp), %rax
	movl	-36(%rbp), %edx
	movl	%edx, 32(%rax)
	movl	$.LC0, %esi
	movl	$_ZSt4cout, %edi
.LEHB1:
	call	_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
	movq	%rax, %rdx
	movq	-24(%rbp), %rax
	movq	%rax, %rsi
	movq	%rdx, %rdi
	call	_ZNSolsEPKv
	movl	$_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_, %esi
	movq	%rax, %rdi
	call	_ZNSolsEPFRSoS_E
.LEHE1:
	jmp	.L4
.L3:
	movq	%rax, %rbx
	movq	-24(%rbp), %rax
	movq	%rax, %rdi
	call	_ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEED1Ev
	movq	%rbx, %rax
	movq	%rax, %rdi
.LEHB2:
	call	_Unwind_Resume
.LEHE2:
.L4:
	addq	$40, %rsp
	popq	%rbx
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE1459:
	.globl	__gxx_personality_v0
	.section	.gcc_except_table._ZN6AnimalC2ENSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEi,"aG",@progbits,_ZN6AnimalC5ENSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEi,comdat
.LLSDA1459:
	.byte	0xff
	.byte	0xff
	.byte	0x1
	.uleb128 .LLSDACSE1459-.LLSDACSB1459
.LLSDACSB1459:
	.uleb128 .LEHB0-.LFB1459
	.uleb128 .LEHE0-.LEHB0
	.uleb128 0
	.uleb128 0
	.uleb128 .LEHB1-.LFB1459
	.uleb128 .LEHE1-.LEHB1
	.uleb128 .L3-.LFB1459
	.uleb128 0
	.uleb128 .LEHB2-.LFB1459
	.uleb128 .LEHE2-.LEHB2
	.uleb128 0
	.uleb128 0
.LLSDACSE1459:
	.section	.text._ZN6AnimalC2ENSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEi,"axG",@progbits,_ZN6AnimalC5ENSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEi,comdat
	.size	_ZN6AnimalC2ENSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEi, .-_ZN6AnimalC2ENSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEi
	.weak	_ZN6AnimalC1ENSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEi
	.set	_ZN6AnimalC1ENSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEi,_ZN6AnimalC2ENSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEi
	.section	.rodata
.LC1:
	.string	"show()"
.LC2:
	.string	","
	.section	.text._ZN6Animal4showEv,"axG",@progbits,_ZN6Animal4showEv,comdat
	.align 2
	.weak	_ZN6Animal4showEv
	.type	_ZN6Animal4showEv, @function
_ZN6Animal4showEv:
.LFB1461:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	pushq	%rbx
	subq	$24, %rsp
	.cfi_offset 3, -24
	movq	%rdi, -24(%rbp)
	movl	$.LC1, %esi
	movl	$_ZSt4cout, %edi
	call	_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
	movq	%rax, %rdx
	movq	-24(%rbp), %rax
	movq	%rax, %rsi
	movq	%rdx, %rdi
	call	_ZNSolsEPKv
	movl	$_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_, %esi
	movq	%rax, %rdi
	call	_ZNSolsEPFRSoS_E
	movq	-24(%rbp), %rax
	movl	32(%rax), %ebx
	movq	-24(%rbp), %rax
	movq	%rax, %rsi
	movl	$_ZSt4cout, %edi
	call	_ZStlsIcSt11char_traitsIcESaIcEERSt13basic_ostreamIT_T0_ES7_RKNSt7__cxx1112basic_stringIS4_S5_T1_EE
	movl	$.LC2, %esi
	movq	%rax, %rdi
	call	_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
	movl	%ebx, %esi
	movq	%rax, %rdi
	call	_ZNSolsEi
	movl	$_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_, %esi
	movq	%rax, %rdi
	call	_ZNSolsEPFRSoS_E
	nop
	addq	$24, %rsp
	popq	%rbx
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE1461:
	.size	_ZN6Animal4showEv, .-_ZN6Animal4showEv
	.section	.text._ZN6AnimalD2Ev,"axG",@progbits,_ZN6AnimalD5Ev,comdat
	.align 2
	.weak	_ZN6AnimalD2Ev
	.type	_ZN6AnimalD2Ev, @function
_ZN6AnimalD2Ev:
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
	call	_ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEED1Ev
	nop
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE1464:
	.size	_ZN6AnimalD2Ev, .-_ZN6AnimalD2Ev
	.weak	_ZN6AnimalD1Ev
	.set	_ZN6AnimalD1Ev,_ZN6AnimalD2Ev
	.section	.rodata
.LC3:
	.string	"xiaoqiang"
.LC4:
	.string	"&dog"
	.text
	.globl	main
	.type	main, @function
main:
.LFB1462:
	.cfi_startproc
	.cfi_personality 0x3,__gxx_personality_v0
	.cfi_lsda 0x3,.LLSDA1462
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	pushq	%rbx
	subq	$104, %rsp
	.cfi_offset 3, -24
	leaq	-17(%rbp), %rax
	movq	%rax, %rdi
	call	_ZNSaIcEC1Ev
	leaq	-17(%rbp), %rdx
	leaq	-64(%rbp), %rax
	movl	$.LC3, %esi
	movq	%rax, %rdi
.LEHB3:
	call	_ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEC1EPKcRKS3_
.LEHE3:
	leaq	-64(%rbp), %rcx
	leaq	-112(%rbp), %rax
	movl	$2, %edx
	movq	%rcx, %rsi
	movq	%rax, %rdi
.LEHB4:
	call	_ZN6AnimalC1ENSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEi
.LEHE4:
	leaq	-64(%rbp), %rax
	movq	%rax, %rdi
	call	_ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEED1Ev
	leaq	-17(%rbp), %rax
	movq	%rax, %rdi
	call	_ZNSaIcED1Ev
	movl	$.LC4, %esi
	movl	$_ZSt4cout, %edi
.LEHB5:
	call	_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
	movq	%rax, %rdx
	leaq	-112(%rbp), %rax
	movq	%rax, %rsi
	movq	%rdx, %rdi
	call	_ZNSolsEPKv
	movl	$_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_, %esi
	movq	%rax, %rdi
	call	_ZNSolsEPFRSoS_E
	leaq	-112(%rbp), %rax
	movq	%rax, %rdi
	call	_ZN6Animal4showEv
.LEHE5:
	leaq	-112(%rbp), %rax
	movq	%rax, %rdi
	call	_ZN6AnimalD1Ev
	movl	$0, %eax
	jmp	.L15
.L13:
	movq	%rax, %rbx
	leaq	-64(%rbp), %rax
	movq	%rax, %rdi
	call	_ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEED1Ev
	jmp	.L10
.L12:
	movq	%rax, %rbx
.L10:
	leaq	-17(%rbp), %rax
	movq	%rax, %rdi
	call	_ZNSaIcED1Ev
	movq	%rbx, %rax
	movq	%rax, %rdi
.LEHB6:
	call	_Unwind_Resume
.L14:
	movq	%rax, %rbx
	leaq	-112(%rbp), %rax
	movq	%rax, %rdi
	call	_ZN6AnimalD1Ev
	movq	%rbx, %rax
	movq	%rax, %rdi
	call	_Unwind_Resume
.LEHE6:
.L15:
	addq	$104, %rsp
	popq	%rbx
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE1462:
	.section	.gcc_except_table,"a",@progbits
.LLSDA1462:
	.byte	0xff
	.byte	0xff
	.byte	0x1
	.uleb128 .LLSDACSE1462-.LLSDACSB1462
.LLSDACSB1462:
	.uleb128 .LEHB3-.LFB1462
	.uleb128 .LEHE3-.LEHB3
	.uleb128 .L12-.LFB1462
	.uleb128 0
	.uleb128 .LEHB4-.LFB1462
	.uleb128 .LEHE4-.LEHB4
	.uleb128 .L13-.LFB1462
	.uleb128 0
	.uleb128 .LEHB5-.LFB1462
	.uleb128 .LEHE5-.LEHB5
	.uleb128 .L14-.LFB1462
	.uleb128 0
	.uleb128 .LEHB6-.LFB1462
	.uleb128 .LEHE6-.LEHB6
	.uleb128 0
	.uleb128 0
.LLSDACSE1462:
	.text
	.size	main, .-main
	.type	_Z41__static_initialization_and_destruction_0ii, @function
_Z41__static_initialization_and_destruction_0ii:
.LFB1914:
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
	jne	.L18
	cmpl	$65535, -8(%rbp)
	jne	.L18
	movl	$_ZStL8__ioinit, %edi
	call	_ZNSt8ios_base4InitC1Ev
	movl	$__dso_handle, %edx
	movl	$_ZStL8__ioinit, %esi
	movl	$_ZNSt8ios_base4InitD1Ev, %edi
	call	__cxa_atexit
.L18:
	nop
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE1914:
	.size	_Z41__static_initialization_and_destruction_0ii, .-_Z41__static_initialization_and_destruction_0ii
	.type	_GLOBAL__sub_I_main, @function
_GLOBAL__sub_I_main:
.LFB1915:
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
.LFE1915:
	.size	_GLOBAL__sub_I_main, .-_GLOBAL__sub_I_main
	.section	.init_array,"aw"
	.align 8
	.quad	_GLOBAL__sub_I_main
	.hidden	__dso_handle
	.ident	"GCC: (GNU) 6.4.1 20170727 (Red Hat 6.4.1-1)"
	.section	.note.GNU-stack,"",@progbits
