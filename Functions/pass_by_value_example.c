#include<stdio.h>
#include <stdlib.h>

/* declaration of function
	take integer as input as value
 return its square */

int get_square(int);

int main(void)
{
	int rs;
	rs = get_square(10); //function call
	printf("get_square(10):rs: %d\n",rs);

	return(0);
}

//function definition
int get_square(int n)

{
	int result;
	result = n*n;
	return result;
}
