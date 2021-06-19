#include<stdio.h>
#include<stdlib.h>

//C calling convention
int sum_of_two_integers1(int n1,int n2);

//pascal/standard calling convention
int __attribute__((stdcall)) sum_of_two_integers2(int n1, int n2);

int main()
{
	int a=10, b=20, sum;

	//Caller
	sum=sum_of_two_integers1(a,b);
	printf("sum=%d\n",sum);


	sum=sum_of_two_integers2(a,b);
	printf("sum=%d\n",sum);
	
	return(0);
}

//Callee
int sum_of_two_integers1(int n1,int n2)
{
	return (n1+n2);
}

int __attribute__((stdcall)) sum_of_two_integers2(int n1, int n2)
{
	return (n1+n2);
}


