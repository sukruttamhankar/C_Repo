#include<stdio.h>
int a[10]= {5,8,2,10,15,1,98,27,0,50};
int N=10;
int i; /*loop variable for outer loop*/
int k; /*loop variable for inner loop*/

int min_index; /*index variable to hold the minimum index*/

int temp; /*temporary variable for swapping */

int cnt; /*loop variable for display loop */

int main()
{

	puts("Before sort: ");
	for(cnt=0;cnt<N;++cnt)
		printf("a[%d]=%d\n",cnt,a[cnt]);

	for(i=0;i<N-1;++i)
	{
	  min_index=i;
		for(k=i;k<N;++k)
		{
		  if(a[k]<a[min_index])
			min_index=k;
		}
   	  temp=a[i];
	  a[i]=a[min_index];
	  a[min_index]=temp;
	}
 	puts("after sort: ");

	for(cnt=0;cnt<N;++cnt)
		printf("a[%d]=%d\n",cnt,a[cnt]);
	return (0);
}

