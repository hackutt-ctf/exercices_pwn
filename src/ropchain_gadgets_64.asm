
.section .text
.global helper_1
.global helper_2
.global helper_3

.type helper_1, @function
.type helper_2, @function
.type helper_3, @function

helper_1:
	sub $0x10,%rsp
	pop %rax
	pop %rsi
	ret

helper_2:
	mov %rdi,(%rsi)
	ret

helper_3:
	sub $0x18,%rsp
	pop %rdi
	pop %rdx
	pop %rbp
	ret
