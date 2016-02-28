	.arch armv5t
	.fpu softvfp
	.eabi_attribute 20, 1
	.eabi_attribute 21, 1
	.eabi_attribute 23, 3
	.eabi_attribute 24, 1
	.eabi_attribute 25, 1
	.eabi_attribute 26, 2
	.eabi_attribute 30, 6
	.eabi_attribute 34, 0
	.eabi_attribute 18, 4
	.file	"cgra_simple_loop.c"
	.global	j
	.data
	.align	2
	.type	j, %object
	.size	j, 4
j:
	.word	5
	.global	k
	.align	2
	.type	k, %object
	.size	k, 4
k:
	.word	3
	.global	l
	.bss
	.align	2
	.type	l, %object
	.size	l, 4
l:
	.space	4
	.global	m
	.align	2
	.type	m, %object
	.size	m, 4
m:
	.space	4
	.global	i
	.data
	.align	2
	.type	i, %object
	.size	i, 4
i:
	.word	100
	.comm	prolog,4,4
	.comm	epilog,4,4
	.comm	kernel,4,4
	.global	activate_CGRA
	.section	.rodata
	.align	2
	.type	activate_CGRA, %object
	.size	activate_CGRA, 4
activate_CGRA:
	.word	15
	.global	var_to_modify
	.data
	.align	2
	.type	var_to_modify, %object
	.size	var_to_modify, 4
var_to_modify:
	.word	20
	.section	.rodata
	.align	2
.LC0:
	.ascii	"Hello from a run1! (thread ID: %d).\012\000"
	.text
	.align	2
	.global	run1
	.type	run1, %function
run1:
	@ args = 0, pretend = 0, frame = 8
	@ frame_needed = 1, uses_anonymous_args = 0
	stmfd	sp!, {fp, lr}
	add	fp, sp, #4
	sub	sp, sp, #8
	str	r0, [fp, #-8]
	bl	pthread_self
	mov	r3, r0
	ldr	r0, .L3
	mov	r1, r3
	bl	printf
	mov	r3, #0
	mov	r0, r3
	sub	sp, fp, #4
	ldmfd	sp!, {fp, pc}
.L4:
	.align	2
.L3:
	.word	.LC0
	.size	run1, .-run1
	.global	initCGRA
	.data
	.align	2
	.type	initCGRA, %object
	.size	initCGRA, 28
initCGRA:
	.word	2011168768
	.word	2011168768
	.word	0
	.word	0
	.word	0
	.word	0
	.word	0
	.global	ptr
	.align	2
	.type	ptr, %object
	.size	ptr, 4
ptr:
	.word	initCGRA
	.section	.rodata
	.align	2
.LC1:
	.ascii	"HELLO FROM CGRA_MAIN THREAD THE ARRAY IS :\000"
	.align	2
.LC2:
	.ascii	"\012ADDRESS TO MODIFY (ARM): %x size of int is %zu\000"
	.align	2
.LC3:
	.ascii	"BYEEEE FROM CGRA_MAIN THREAD THE ARRAY IS :\000"
	.text
	.align	2
	.global	run2
	.type	run2, %function
run2:
	@ args = 0, pretend = 0, frame = 8
	@ frame_needed = 1, uses_anonymous_args = 0
	stmfd	sp!, {fp, lr}
	add	fp, sp, #4
	sub	sp, sp, #8
	str	r0, [fp, #-8]
	ldr	r0, .L7
	bl	puts
	ldr	r0, .L7+4
	ldr	r1, .L7+8
	mov	r2, #4
	bl	printf
	ldr	r3, .L7+12
	ldr	r3, [r3, #4]
#APP
@ 65 "cgra_simple_loop.c" 1
	mov sl,r3
@ 0 "" 2
	ldr	r3, .L7+12
	ldr	r3, [r3, #20]
#APP
@ 66 "cgra_simple_loop.c" 1
	mov r8,r3
@ 0 "" 2
	ldr	r3, .L7+12
	ldr	r3, [r3, #8]
#APP
@ 67 "cgra_simple_loop.c" 1
	mov r6,r3
@ 0 "" 2
	ldr	r3, .L7+12
	ldr	r3, [r3, #12]
#APP
@ 68 "cgra_simple_loop.c" 1
	mov r1,r3
@ 0 "" 2
	ldr	r3, .L7+12
	ldr	r3, [r3, #16]
#APP
@ 69 "cgra_simple_loop.c" 1
	mov r2,r3
@ 0 "" 2
	ldr	r3, .L7+12
	ldr	r3, [r3, #24]
#APP
@ 70 "cgra_simple_loop.c" 1
	mov r4,r3
@ 0 "" 2
	ldr	r3, .L7+16
	ldr	r3, [r3, #0]
#APP
@ 71 "cgra_simple_loop.c" 1
	mov r5,r3
@ 0 "" 2
	ldr	r3, .L7+20
	ldr	r3, [r3, #0]
#APP
@ 72 "cgra_simple_loop.c" 1
	mov r12,r3
@ 0 "" 2
	ldr	r3, .L7+24
	ldr	r3, [r3, #0]
#APP
@ 73 "cgra_simple_loop.c" 1
	mov r10,r3
@ 0 "" 2
	ldr	r3, .L7+28
	ldr	r3, [r3, #0]
#APP
@ 74 "cgra_simple_loop.c" 1
	mov r11,r3
@ 0 "" 2
	ldr	r0, .L7+32
	bl	puts
	mov	r3, #0
	mov	r0, r3
	sub	sp, fp, #4
	ldmfd	sp!, {fp, pc}
.L8:
	.align	2
.L7:
	.word	.LC1
	.word	.LC2
	.word	var_to_modify
	.word	initCGRA
	.word	kernel
	.word	prolog
	.word	epilog
	.word	activate_CGRA
	.word	.LC3
	.size	run2, .-run2
	.section	.rodata
	.align	2
.LC4:
	.ascii	"\012**********DIPAL %d*********\012\000"
	.align	2
.LC5:
	.ascii	"./epilog_ins.bin\000"
	.align	2
.LC6:
	.ascii	"rb\000"
	.align	2
.LC7:
	.ascii	"./prolog_ins.bin\000"
	.align	2
.LC8:
	.ascii	"./kernel_ins.bin\000"
	.align	2
.LC9:
	.ascii	"\012**********EPISIZE %d*********\012\000"
	.align	2
.LC10:
	.ascii	"\012**********PROSIZE %d*********\012\000"
	.align	2
.LC11:
	.ascii	"\012**********KERNSIZE %d*********\012\000"
	.align	2
.LC12:
	.ascii	"\012******SIZE OF UNISGNED INT %d*****\012\000"
	.align	2
.LC13:
	.ascii	"./livevar_st_ins_count.txt\000"
	.align	2
.LC14:
	.ascii	"r\000"
	.align	2
.LC15:
	.ascii	"%d\000"
	.align	2
.LC16:
	.ascii	"\012**********livevar_st_size %d*********\012\000"
	.align	2
.LC17:
	.ascii	"\012**********II %d*********\012\000"
	.align	2
.LC18:
	.ascii	"\012**********PROLOG PC %p*********\012\000"
	.align	2
.LC19:
	.ascii	"\012**********PROLOG[1]  %x*********\012\000"
	.align	2
.LC20:
	.ascii	"\012**********PROLOG[2]  %x*********\012\000"
	.align	2
.LC21:
	.ascii	"\012**********KERNEL PC %p*********\012\000"
	.align	2
.LC22:
	.ascii	"\012**********EPILOG PC %p*********\012\000"
	.align	2
.LC23:
	.ascii	"./loop_iterations.txt\000"
	.align	2
.LC24:
	.ascii	"ORIGINAL VALUE: %d ADDRESS=%x\000"
	.align	2
.LC25:
	.ascii	"Main thread initialized. TID=%d\012\000"
	.align	2
.LC26:
	.ascii	"result == 0\000"
	.align	2
.LC27:
	.ascii	"cgra_simple_loop.c\000"
	.align	2
.LC28:
	.ascii	"Main thread called pthread_attr_init\000"
	.align	2
.LC29:
	.ascii	"Main thread called pthread_attr_setscope\000"
	.align	2
.LC30:
	.ascii	"Main thread creating 1st thread...\000"
	.align	2
.LC31:
	.ascii	"Main thread creating 2nd thread...\000"
	.align	2
.LC32:
	.ascii	"Main thread calling join w/ 1st thread (id=%lx)... "
	.ascii	"(self=%lx)\012\000"
	.align	2
.LC33:
	.ascii	"Main thread calling join w/ 2nd thread (id=%lx)... "
	.ascii	"(self=%lx)\012\000"
	.align	2
.LC34:
	.ascii	"Main thread has self=%d\012\000"
	.align	2
.LC35:
	.ascii	"Printing Results For CGRA Execution.\000"
	.align	2
.LC36:
	.ascii	"\012i = %d\011j = %d k = %d\012\000"
	.align	2
.LC37:
	.ascii	"\012Main thread done.\000"
	.align	2
.LC38:
	.ascii	"MODIFIED VALUE: %d\000"
	.text
	.align	2
	.global	main
	.type	main, %function
main:
	@ args = 0, pretend = 0, frame = 104
	@ frame_needed = 1, uses_anonymous_args = 0
	stmfd	sp!, {r4, fp, lr}
	add	fp, sp, #8
	sub	sp, sp, #108
	str	r0, [fp, #-112]
	str	r1, [fp, #-116]
	ldr	r3, .L13
	ldr	r3, [r3, #0]
	str	r3, [fp, #-16]
	ldr	r0, .L13+4
	ldr	r1, [fp, #-112]
	bl	printf
	ldr	r0, .L13+8
	ldr	r1, .L13+12
	bl	fopen
	str	r0, [fp, #-88]
	ldr	r0, .L13+16
	ldr	r1, .L13+12
	bl	fopen
	str	r0, [fp, #-84]
	ldr	r0, .L13+20
	ldr	r1, .L13+12
	bl	fopen
	str	r0, [fp, #-80]
	sub	r3, fp, #108
	mov	r0, r3
	mov	r1, #4
	mov	r2, #1
	ldr	r3, [fp, #-88]
	bl	fread
	sub	r3, fp, #104
	mov	r0, r3
	mov	r1, #4
	mov	r2, #1
	ldr	r3, [fp, #-84]
	bl	fread
	sub	r3, fp, #100
	mov	r0, r3
	mov	r1, #4
	mov	r2, #1
	ldr	r3, [fp, #-80]
	bl	fread
	ldr	r3, [fp, #-108]
	ldr	r0, .L13+24
	mov	r1, r3
	bl	printf
	ldr	r3, [fp, #-104]
	ldr	r0, .L13+28
	mov	r1, r3
	bl	printf
	ldr	r3, [fp, #-100]
	ldr	r0, .L13+32
	mov	r1, r3
	bl	printf
	ldr	r0, .L13+36
	mov	r1, #4
	bl	printf
	ldr	r3, [fp, #-108]
	mov	r3, r3, asl #2
	mov	r0, r3
	bl	malloc
	mov	r3, r0
	mov	r2, r3
	ldr	r3, .L13+40
	str	r2, [r3, #0]
	ldr	r3, [fp, #-104]
	mov	r3, r3, asl #2
	mov	r0, r3
	bl	malloc
	mov	r3, r0
	mov	r2, r3
	ldr	r3, .L13+44
	str	r2, [r3, #0]
	ldr	r3, [fp, #-100]
	mov	r3, r3, asl #2
	mov	r0, r3
	bl	malloc
	mov	r3, r0
	mov	r2, r3
	ldr	r3, .L13+48
	str	r2, [r3, #0]
	ldr	r3, .L13+40
	ldr	r2, [r3, #0]
	ldr	r3, [fp, #-108]
	mov	r0, r2
	mov	r1, #4
	mov	r2, r3
	ldr	r3, [fp, #-88]
	bl	fread
	ldr	r3, .L13+44
	ldr	r2, [r3, #0]
	ldr	r3, [fp, #-104]
	mov	r0, r2
	mov	r1, #4
	mov	r2, r3
	ldr	r3, [fp, #-84]
	bl	fread
	ldr	r3, .L13+48
	ldr	r2, [r3, #0]
	ldr	r3, [fp, #-100]
	mov	r0, r2
	mov	r1, #4
	mov	r2, r3
	ldr	r3, [fp, #-80]
	bl	fread
	ldr	r0, .L13+52
	ldr	r1, .L13+56
	bl	fopen
	str	r0, [fp, #-76]
	sub	r3, fp, #96
	ldr	r0, [fp, #-76]
	ldr	r1, .L13+60
	mov	r2, r3
	bl	__isoc99_fscanf
	ldr	r3, [fp, #-100]
	add	r2, r3, #15
	cmp	r3, #0
	movlt	r3, r2
	mov	r3, r3, asr #4
	str	r3, [fp, #-72]
	ldr	r3, [fp, #-108]
	add	r2, r3, #15
	cmp	r3, #0
	movlt	r3, r2
	mov	r3, r3, asr #4
	str	r3, [fp, #-68]
	ldr	r3, [fp, #-104]
	add	r2, r3, #15
	cmp	r3, #0
	movlt	r3, r2
	mov	r3, r3, asr #4
	str	r3, [fp, #-64]
	ldr	r3, .L13+64
	ldr	r2, [fp, #-72]
	str	r2, [r3, #8]
	ldr	r3, .L13+64
	ldr	r2, [fp, #-68]
	str	r2, [r3, #12]
	ldr	r3, .L13+64
	ldr	r2, [fp, #-64]
	str	r2, [r3, #16]
	ldr	r3, [fp, #-96]
	add	r2, r3, #15
	cmp	r3, #0
	movlt	r3, r2
	mov	r3, r3, asr #4
	mov	r2, r3
	ldr	r3, .L13+64
	str	r2, [r3, #24]
	ldr	r3, [fp, #-96]
	ldr	r0, .L13+68
	mov	r1, r3
	bl	printf
	ldr	r0, .L13+72
	ldr	r1, [fp, #-72]
	bl	printf
	ldr	r3, .L13+44
	ldr	r3, [r3, #0]
	ldr	r0, .L13+76
	mov	r1, r3
	bl	printf
	ldr	r3, .L13+44
	ldr	r3, [r3, #0]
	add	r3, r3, #4
	ldr	r3, [r3, #0]
	ldr	r0, .L13+80
	mov	r1, r3
	bl	printf
	ldr	r3, .L13+44
	ldr	r3, [r3, #0]
	add	r3, r3, #8
	ldr	r3, [r3, #0]
	ldr	r0, .L13+84
	mov	r1, r3
	bl	printf
	ldr	r3, .L13+48
	ldr	r3, [r3, #0]
	ldr	r0, .L13+88
	mov	r1, r3
	bl	printf
	ldr	r3, .L13+40
	ldr	r3, [r3, #0]
	ldr	r0, .L13+92
	mov	r1, r3
	bl	printf
	ldr	r0, [fp, #-88]
	bl	fclose
	ldr	r0, [fp, #-84]
	bl	fclose
	ldr	r0, [fp, #-80]
	bl	fclose
	ldr	r0, [fp, #-76]
	bl	fclose
	ldr	r0, .L13+96
	ldr	r1, .L13+56
	bl	fopen
	str	r0, [fp, #-76]
	ldr	r0, [fp, #-76]
	ldr	r1, .L13+60
	ldr	r2, .L13+100
	bl	__isoc99_fscanf
	ldr	r0, [fp, #-76]
	bl	fclose
	ldr	r0, .L13+104
	ldr	r1, .L13+108
	mov	r2, #4
	bl	printf
	ldr	r3, .L13+108
	ldr	r3, [r3, #0]
	ldr	r0, .L13+112
	mov	r1, r3
	ldr	r2, .L13+108
	bl	printf
	bl	pthread_self
	mov	r3, r0
	ldr	r0, .L13+116
	mov	r1, r3
	bl	printf
	sub	r3, fp, #52
	mov	r0, r3
	bl	pthread_attr_init
	str	r0, [fp, #-60]
	ldr	r3, [fp, #-60]
	cmp	r3, #0
	beq	.L10
	ldr	r0, .L13+120
	ldr	r1, .L13+124
	mov	r2, #142
	ldr	r3, .L13+128
	bl	__assert_fail
.L10:
	ldr	r0, .L13+132
	bl	puts
	sub	r3, fp, #52
	mov	r0, r3
	mov	r1, #0
	bl	pthread_attr_setscope
	str	r0, [fp, #-60]
	ldr	r3, [fp, #-60]
	cmp	r3, #0
	beq	.L11
	ldr	r0, .L13+120
	ldr	r1, .L13+124
	mov	r2, #146
	ldr	r3, .L13+128
	bl	__assert_fail
.L11:
	ldr	r0, .L13+136
	bl	puts
	ldr	r0, .L13+140
	bl	puts
	ldr	r0, .L13+144
	bl	puts
	sub	r2, fp, #92
	sub	r3, fp, #52
	mov	r0, r2
	mov	r1, r3
	ldr	r2, .L13+148
	mov	r3, #0
	bl	pthread_create
	str	r0, [fp, #-60]
	bl	pthread_self
	mov	r3, r0
	ldr	r0, .L13+152
	ldr	r1, [fp, #-56]
	mov	r2, r3
	bl	printf
	ldr	r4, [fp, #-92]
	bl	pthread_self
	mov	r3, r0
	ldr	r0, .L13+156
	mov	r1, r4
	mov	r2, r3
	bl	printf
	ldr	r3, [fp, #-92]
	mov	r0, r3
	mov	r1, #0
	bl	pthread_join
	bl	pthread_self
	mov	r3, r0
	ldr	r0, .L13+160
	mov	r1, r3
	bl	printf
	ldr	r0, .L13+164
	bl	puts
	ldr	r3, .L13+168
	ldr	r1, [r3, #0]
	ldr	r3, .L13+172
	ldr	r2, [r3, #0]
	ldr	r3, .L13+176
	ldr	r3, [r3, #0]
	ldr	r0, .L13+180
	bl	printf
	ldr	r0, .L13+184
	bl	puts
	ldr	r3, .L13+108
	ldr	r3, [r3, #0]
	ldr	r0, .L13+188
	mov	r1, r3
	bl	printf
	mov	r0, r3
	ldr	r3, .L13
	ldr	r2, [fp, #-16]
	ldr	r3, [r3, #0]
	cmp	r2, r3
	beq	.L12
	bl	__stack_chk_fail
.L12:
	sub	sp, fp, #8
	ldmfd	sp!, {r4, fp, pc}
.L14:
	.align	2
.L13:
	.word	__stack_chk_guard
	.word	.LC4
	.word	.LC5
	.word	.LC6
	.word	.LC7
	.word	.LC8
	.word	.LC9
	.word	.LC10
	.word	.LC11
	.word	.LC12
	.word	epilog
	.word	prolog
	.word	kernel
	.word	.LC13
	.word	.LC14
	.word	.LC15
	.word	initCGRA
	.word	.LC16
	.word	.LC17
	.word	.LC18
	.word	.LC19
	.word	.LC20
	.word	.LC21
	.word	.LC22
	.word	.LC23
	.word	initCGRA+20
	.word	.LC2
	.word	var_to_modify
	.word	.LC24
	.word	.LC25
	.word	.LC26
	.word	.LC27
	.word	__PRETTY_FUNCTION__.5626
	.word	.LC28
	.word	.LC29
	.word	.LC30
	.word	.LC31
	.word	run2
	.word	.LC32
	.word	.LC33
	.word	.LC34
	.word	.LC35
	.word	i
	.word	j
	.word	k
	.word	.LC36
	.word	.LC37
	.word	.LC38
	.size	main, .-main
	.section	.rodata
	.align	2
	.type	__PRETTY_FUNCTION__.5626, %object
	.size	__PRETTY_FUNCTION__.5626, 5
__PRETTY_FUNCTION__.5626:
	.ascii	"main\000"
	.ident	"GCC: (Ubuntu/Linaro 4.7.3-12ubuntu1) 4.7.3"
	.section	.note.GNU-stack,"",%progbits
