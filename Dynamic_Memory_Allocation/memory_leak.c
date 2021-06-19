//puts(),NULL
#include<stdio.h>

//malloc, exit declaration
#include<stdlib.h>

//memset declaration
#include<string.h>

//sleep() function declaration
#include<unistd.h>

void test_function(void);
void test_function2(void);

int main(void)
{
	test_function(void);
	test_function2(void);
	return(0);
}

void test_function(void)
{
	int* p = NULL;
	p=(int*)malloc(sizeof(int));
	if(p==NULL)
	{
		puts("memory allocation error.\n");
		exit(-1);
	}

	memset(p,0,sizeof(int));
	*p=500;
	
}

void test_function2(void)
{
	sleep(10);
}

/*
 stack: life time: lifetime of the function
p[10000]

	  
						heap-> lifetime upto free()
					10000[500]
*/


