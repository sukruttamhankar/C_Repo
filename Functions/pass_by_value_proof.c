#include <stdio.h>
#include <stdlib.h>

int get_square(int);

int main(void)
{
	int m=10;
	int rs;
	printf("Address of m is: %p\n",&m);
	printf("Before call (m) is: %d\n",m);
	rs = get_square(m);
	printf("After call (m) is: %d\n",m);
	printf("main (rs): %d\n",rs);
	return(0);
}

int get_square(int n)
{
	int rs;
	printf("Address of n is: %p\n",&n);
	printf("n is: %d\n",n);
	rs = n*n;
	return rs;
}
