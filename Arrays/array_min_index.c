#include<stdio.h>

int a[5]={2,4,8,1,6};
int N=5;
int i;
int k;
int min_index;
int cnt;
int temp;
int main(void)
{
	for(cnt=0;cnt<N;++cnt)
		printf("a[%d]=%d\n",cnt,a[cnt]);
	
	for(i=0;i<N;++i)
	{	
	  min_index=i;
		for(k=i;k<N;++k)
		{
			if(a[k]<a[min_index]
			 min_index=k;
		}
	 printf("min_index=%d\n",min_index);
	}
}
