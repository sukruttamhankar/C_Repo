#include<stdio.h>
#include<stdlib.h>

int A[10]; // A is array 10 of integers

/*comment

Type of variable A is int  [10]
 
But unlike built in data types and structure
this entire type can not be on left

some part must be on left and some part must be on right

Type of array element = left of variable
subscript operator [] = right of variable

int A[10];

This will be reflected in declaration of pointer as well

p is a pointer

*p

p is a pointer to array

(*p)[]

p is a pointer to array of integers

int (*p)[];

*/

int main(void)

{
	int (*p)[]=NULL;
	int i;
	p = &A;

	/* type of (A) = int [10]
	 type of (&A) = int (*)[10]
	 type of (p) = int (*p)[10]
	 */

	/* write operation on array through pointer */

	// (*p) = refers to start of array
	// (*p)[i] = refers to ith element of array

	for (i=0;i<10;++i)
		(*p)[i] = (i+1)*10;

	/* read operation on array through pointer */

	for(i=0;i<10;++i)
		printf("a[%d]:%d\n",i,(*p)[i]);

	exit(EXIT_SUCCESS);


}
