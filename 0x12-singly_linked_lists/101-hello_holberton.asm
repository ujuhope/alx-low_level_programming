global 	main
extern 	printf

section .text
main:
mov	rdi, format 	;set 1st parameter (format)
mov	rax, 0		;no vectors registers in use
call	printf 		;printf(format, )
mov	rax, 0		;normal exit
ret
format:
db "Hello, Holberton", 10, 0 ;C strings need a zero byte at the end
