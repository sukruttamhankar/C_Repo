#include<stdio.h>
#include<stdlib.h>

int A[10];

void display(int* p,int n);

int main(void)
{
	int *p=NULL; //Instead of declaring pointer to array. we are declaring pointer to array element type

	int i;

	p=&A[0];  //typeof RHS = int*    typeof LHS = int*

	/*write operation*/

	for(i=0;i<10;++i)
		*(p+i) = (i+1)*10;

	display(&A[0],10);

	exit(0);

}

void display(int* p, int n)
{
	int i;
	/*read and display array*/

	for(i=0;i<10;++i)
		printf("a[%d]:%d\n",i,*(p+i));
}
