#include<stdio.h>
#include<stdlib.h>

int get_summation(int *A, int n);

int main(void)
{
	int A[10]={10,20,30,40,50,60,70,80,90,100};
	int result;

	result = get_summation(&A[0],10);
	printf("result: %d\n",result);

	return(0);
}

int get_summation(int *A, int n)
{
	int i;
	int summation;

	for(i=0;i<10;++i)
	{
		summation = summation + A[i];
	}
	return summation;
}

