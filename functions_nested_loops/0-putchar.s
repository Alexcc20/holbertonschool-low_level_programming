	.file	"0-putchar.c"
	.text
	.globl	main
	.type	main, @function
main:
.LFB0:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	movl	$95, %edi
	movl	$0, %eax
	call	_putchar@PLT
	movl	$112, %edi
	movl	$0, %eax
	call	_putchar@PLT
	movl	$117, %edi
	movl	$0, %eax
	call	_putchar@PLT
	movl	$116, %edi
	movl	$0, %eax
	call	_putchar@PLT
	movl	$99, %edi
	movl	$0, %eax
	call	_putchar@PLT
	movl	$104, %edi
	movl	$0, %eax
	call	_putchar@PLT
	movl	$97, %edi
	movl	$0, %eax
	call	_putchar@PLT
	movl	$114, %edi
	movl	$0, %eax
	call	_putchar@PLT
	movl	$12142, %edi
	movl	$0, %eax
	call	_putchar@PLT
	movl	$0, %eax
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE0:
	.size	main, .-main
	.ident	"GCC: (Ubuntu 9.4.0-1ubuntu1~20.04.2) 9.4.0"
	.section	.note.GNU-stack,"",@progbits
	.section	.note.gnu.property,"a"
	.align 8
	.long	 1f - 0f
	.long	 4f - 1f
	.long	 5
0:
	.string	 "GNU"
1:
	.align 8
	.long	 0xc0000002
	.long	 3f - 2f
2:
	.long	 0x3
3:
	.align 8
4:
