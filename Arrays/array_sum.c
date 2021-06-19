#include<stdio.h>
#include<stdlib.h>

int a[10]={10,20,30,40,50,60,70,80,90,100};	/*input array*/
int b[10];	/*output array*/

int i; /*outer loop variable*/
int k; /*inner loop variable*/

int sum; /*variable to store inner loop summation*/

int main()
{
	for (i=0;i<10;++i)
	{
 		sum = 0;
		for(k=i;k<10;++k)
		{
			sum = sum +a[k];
		}
		b[i]=sum;
		printf("b[%d]:%d\n",i,b[i]);
	}
	return(EXIT_SUCCESS);
}

