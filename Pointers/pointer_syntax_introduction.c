#include<stdio.h>
#include<stdlib.h>

int n1=100;

/* &n1 -> yields an address given by the linker BUT NOTE THAT
&n1 IS NOT AN LVALUE
*/

int main()
{
	/* &n1 = 200; compile time error.
	&n1 is NOT AN LVALUE which is required by
	LHS operand of = */
	exit(0);
}

/* Why &v is not an lvalue ???

Because valuewise &v for ANY defined variable v is an
unsigned integer

Therefore only specifying &v on LHS is not ENOUGH for compiler
to know that LHS is a memory location and not an address.

Because if you put a constant unsigned integer on LHS

such as

100=a;

so one has no trouble in understanding that 100 is not an LVALUE 
its merely an integer

If 0x8048a20 is an address of a (lets say then) saying

&n1=200;

is as good as saying

0x8048a20 = 200;

which is surely going to make compiler emit lvalue missing error.

Therefore, &v is ALWAYS going to be an rvalue expression such as:

	lhs=&v; 	is allowed
		
	Let v1 and v2 be variables of type T1 and T2.
	&v1 -> address of v1
	&v2 -> address of v2

	lhs1=&v1;
	lhs2=&v2;

	address: 32 bit -> 4 bytes
	64 bit ->8 bytes
32 bit
	unsigned int n1=&v1;
	unsigned int n2=&v2;
64 bit
	unsigned long long int n1=&v1;
	unsigned long long int n2=&v2;

Let v be variable of ANY type
&v -> value ->unsigned integer(irrespective of type of v)

*/





