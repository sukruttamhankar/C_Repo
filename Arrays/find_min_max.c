#include<stdio.h>
#include<stdlib.h>

int A[10];
int current_min;
int current_max;
int i;

int main()
{

	for(i=0;i<10;++i)
	{
		printf("Enter A[%d]:",i);
		scanf("%d",&A[i]);
	}
	for(i=0;i<10;++i)
	{
		printf("A[%d]:%d\n",i,A[i]);
	}

	current_min=A[0];
	current_max=A[0];

	for(i=0;i<10;++i)
	{
		if(A[i]>current_max)
			current_max=A[i];

		if(A[i]<current_min)
			current_min=A[i];

	}

	printf("Min = %d, Max = %d\n",current_min,current_max);
	exit(0);

}

