---
{"dg-publish":true,"permalink":"/data-structures-in-cpp/c-basics/c-compiler-process/"}
---

---

A **compiler** is a computer program that translates an entire set of instructions written in a higher-level symbolic language (such as C) into machine language before the instructions can be executed. [^1]

---

There are three stages of compiling. 

Let's look at one of the simplest programs in C

```c++
#include <stdio.h>
#define macro_name(value1, value2, ...) macro_body

int main(){
    printf("Hello World");    // Output text
    return 0;                 // Success!
}
```

First, the compiler _preprocesses_ the file so it becomes easier to translate later on to machine language. This means to include all the header files, replace macros and remove contents.
![PreprocessingCompiling.png](/img/user/Data%20Structures%20in%20Cpp/Reference%20images/PreprocessingCompiling.png)

For our _hello world_ file, two comments are removed and all of the `stdio.h` functions are included. 

```c++
482 extern int fprintf (FILE *__restrict __stream,
			const char *__restrict __format, ...);
483
484
485 extern printf (const char *__restrict __format, ...);
486
...
```
Here we can see the `printf()` signature being included.

```c++
841 # 3 "main.c" 2
842
843
833 # 4 "main.c"
845 int main(){
846 printf("Hello World");
847 }
849
```
And our main code without comments or macros.

Then, this optimized code is transformed into architecture-dependent mnemonics in Assembly code.

![CodeGenerationStage.png](/img/user/Data%20Structures%20in%20Cpp/Reference%20images/CodeGenerationStage.png)
Here's the entirety of our code in assembly language:

```c++
	.file	"main.c"
	.text
	.section	.rodata
.LC0:
	.string	"Hello World"
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
	leaq	.LC0(%rip), %rax
	movq	%rax, %rdi
	movl	$0, %eax
	call	printf@PLT
	movl	$0, %eax
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE0:
	.size	main, .-main
	.ident	"GCC: (Ubuntu 11.4.0-1ubuntu1~22.04) 11.4.0"
	.section	.note.GNU-stack,"",@progbits
	.section	.note.gnu.property,"a"
	.align 8
	.long	1f - 0f
	.long	4f - 1f
	.long	5
0:
	.string	"GNU"
1:
	.align 8
	.long	0xc0000002
	.long	3f - 2f
2:
	.long	0x3
3:
	.align 8
4:
```

Finally, this code is translated into opcodes.

![AssemblerStage.png](/img/user/Data%20Structures%20in%20Cpp/Reference%20images/AssemblerStage.png)
And this code is not meant to be read by humans so if you open your `.o` file you will not get right away what the program is doing and it won't typically show on text editors.

We can use the [[Linux Essentials/hexdump\|hexdump]] Linux command to see how our _hello world_ program looks like:

```c++
katja@DESKTOP-95VPM4C:~/desktop$ hexdump a-main.o
0000000 457f 464c 0102 0001 0000 0000 0000 0000
0000010 0001 003e 0001 0000 0000 0000 0000 0000
0000020 0000 0000 0000 0000 0260 0000 0000 0000
0000030 0000 0000 0040 0000 0000 0040 000e 000d
0000040 b3c3 1e0f bac3 4855 89c2 a5c3 c248 058d
0000050 0000 0000 c248 c389 c287 00b8 0000 c300
0000060 00a8 0000 c200 00b8 0000 5d00 83c3 6548
0000070 6c6c 206f 6f57 6c72 0064 4700 4343 203a
0000080 5528 7562 746e 2075 3131 342e 302e 312d
0000090 6275 6e75 7574 7e31 3232 302e 2934 3120
00000a0 2e31 2e34 0030 0000 0000 0400 0000 1000
00000b0 0000 0500 0000 4700 554e 0200 0000 80c3
00000c0 0004 0000 0003 0000 0000 0000 0014 0000
00000d0 0000 0000 7a01 0052 7801 0110 0c1b 0807
00000e0 90c2 0001 1c00 0000 1c00 0000 0000 0000
00000f0 2300 0000 0000 0e45 c210 0286 0d43 5a06
0000100 070c 0008 0000 0000 0000 0000 0000 0000
0000110 0000 0000 0000 0000 0000 0000 0000 0001
0000120 0000 0004 b1c3 bfc3 0000 0000 0000 0000
0000130 0000 0000 0000 0000 0000 0000 0003 0001
0000140 0000 0000 0000 0000 0000 0000 0000 0000
0000150 0000 0000 0003 0005 0000 0000 0000 0000
0000160 0000 0000 0000 0000 0008 0000 0012 0001
0000170 0000 0000 0000 0000 0023 0000 0000 0000
0000180 000d 0000 0010 0000 0000 0000 0000 0000
0000190 0000 0000 0000 0000 6d00 6961 2e6e 0063
00001a0 616d 6e69 7000 6972 746e 0066 0000 0000
00001b0 000b 0000 0000 0000 0002 0000 0003 0000
00001c0 bcc3 bfc3 bfc3 bfc3 bfc3 bfc3 bfc3 bfc3
00001d0 0018 0000 0000 0000 0004 0000 0005 0000
00001e0 bcc3 bfc3 bfc3 bfc3 bfc3 bfc3 bfc3 bfc3
00001f0 0020 0000 0000 0000 0002 0000 0002 0000
0000200 0000 0000 0000 0000 2e00 7973 746d 6261
0000210 2e00 7473 7472 6261 2e00 6873 7473 7472
0000220 6261 2e00 6572 616c 742e 7865 0074 642e
0000230 7461 0061 622e 7373 2e00 6f72 6164 6174
0000240 2e00 6f63 6d6d 6e65 0074 6e2e 746f 2e65
0000250 4e47 2d55 7473 6361 006b 6e2e 746f 2e65
0000260 6e67 2e75 7270 706f 7265 7974 2e00 6572
0000270 616c 652e 5f68 7266 6d61 0065 0000 0000
0000280 0000 0000 0000 0000 0000 0000 0000 0000
```

[^1]: Definition extracted from [Compiler Definition & Meaning - Merriam-Webster](https://www.merriam-webster.com/dictionary/compiler)
