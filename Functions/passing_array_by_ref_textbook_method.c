#include<stdio.h>
#include<stdlib.h>

/* get_summation is a function accepting a pointer to array of integer and integer 
	returning integer */

int get_summation(int (*p_arr)[], int n);

int main(void)
{
	int A[10] = {10,20,30,40,50,60,70,80,90,100};
	int sum;

	sum = get_summation(&A, 10);
	printf("Textbook method:sum:%d\n",sum);

	return(0);
}

int get_summation(int (*p_arr)[], int size)

{
	int summation =0;
	int i;

	for(i=0;i<size;++i)
	{
		summation = summation + (*p_arr)[i];
	}
	return summation;
}
