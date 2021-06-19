#include<stdio.h>
#include<stdlib.h>

/*It is known that following data definition statement in C will be
converted into following assembly code (GCC IA 32 assembly)
	.section .bss
	.comm n1, 4, 4

It is also known that the generated assembly file will be given to the
assembler for conversion in machine language and the assembler will replace n1 by
the offset (primary address) and at link stage i.e. while preparing an executable file 
the address given by assembler (which we can call as offset) will be relocated by linker.

and that relocated address will be present in the exe file.

The question is,
while writing C program we know that n1 will eventually get an address after 
compilation + assembly + linking

But is there an expression in C programming language which compiler will evaluate 
to the address of a variable name (which will be allocated during the program build)

The answer is YES. If v is ANY defined variable in C program then unary prefix operator known as 
ampersed and operator when applied on variable v yields its address.

&v ->an address of defined variable v.
&v ->is an RHS expression (or rvalue) which can be assigned to appropriate lvalue

Evaluation -> address of v
Type Evaluation ->

*/

int n1;

int main(){

/* to print an address of any variable, format specifier is %p
which prints the address of variable in hexadecimal format 
*/
printf("address of n1 = %p\n",&n1);
exit(0);

}
 
