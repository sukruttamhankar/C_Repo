#include<stdio.h>
#include<stdlib.h>

int A[5];
int i;

int main(){

	for (i=0;i<5;++i)
	{
		printf("Enter A[%d]:",i);
		scanf("%d",&A[i]);

	}
	for (i=0;i<5;++i)
		printf("A[%d]=%d\n",i,A[i]);

	exit(0);
}

