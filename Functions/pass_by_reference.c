#include<stdio.h>
#include<stdlib.h>

//function declaration

int get_square(int*);

int main(void)
{
	int m=10;
	int rs;
	printf("main: Address of m: %p\n",&m);
	/*sending m by reference*/
	printf("main: before call: value of m: %d\n",m);
	rs = get_square(&m);
	printf("main: After call: value of m: %d\n",m);
	printf("main: rs: %d\n",rs);

	return(0);
}

//function definition
int get_square(int *p)
{
	int n = *p;
	int rs;
	printf("get_square:p : %p, n = %d\n",p,n);
	rs = n*n;
	return rs;

}
