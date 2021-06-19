#include<stdio.h>
#include<stdlib.h>

int get_square_1(int n);
int get_square_2(int *p);
void get_square_3(int n, int *p_result);
void get_square_4(int *p);

int main(void)
{
	int n;
	int return_value;

	printf("Enter n:\n");
	scanf("%d",&n);

	return_value = get_square_1(n);
	printf("get_square_1:return_value:%d\n",return_value);

	return_value = get_square_2(&n);
	printf("get_square_2:return_value:%d\n",return_value);

	return_value = -1;
	printf("Before call to get_square_3:return_value:%d\n",return_value );
	get_square_3(n, &return_value);
	printf("After call to get_square_3:return_value:%d\n",return_value);

	printf("Before call to get_square_4:n: %d\n",n );
	get_square_4(&n);
	printf("After call to get_square_4:n: %d\n",n );

	return(0);
}

int get_square_1(int n)
{
	int result;
	result = n*n;
	return result;
}

int get_square_2(int *p)
{
	int input_integer= *p;
	int result;
	result = input_integer * input_integer;
	return result;
}

void get_square_3(int n, int *p_result)
{
	*p_result = n*n;
}

void get_square_4(int *p)
{
	int input_integer = *p;
	*p = input_integer * input_integer;
}
