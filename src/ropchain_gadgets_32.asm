
.section .text
.global helper_1
.global helper_2
.global helper_3

.type helper_1, @function
.type helper_2, @function
.type helper_3, @function

helper_1:
	sub $8,%esp
	pop %eax
	pop %ecx
	ret

helper_2:
	mov %eax,(%ebx)
	ret

helper_3:
	sub $12,%esp
	pop %ebx
	pop %edx
	pop %ebp
	ret
	int $0x80
