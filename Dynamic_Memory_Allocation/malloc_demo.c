#include<stdio.h>

//contains the declaration of malloc() and free()

#include<stdlib.h>

//declaration of memset()

#include<string.h>

int main(void)
{
	//S1
	int *p = NULL;

	//S2, S2-A
	p = (int*)malloc(sizeof(int));
	if(p==NULL)
	{
		printf("memory allocation failed\n");
		exit(-1);
	}

	//S3
	memset(p,0.sizeof(int));

	//S4
	printf("Enter an integer:\n");
	scanf("%d",p);
	printf("Enter the number:%d\n",*p);
	
	//S5
	free(p);
	p=NULL;
	
	return(0);

}

/* Dynamic integer : using malloc()

S1: Declare a pointer to int and initialize it to NULL

int *p=NULL

S2: Allocate memory to an integer instance using malloc() and sav
the address in p

p=(int*)malloc(sizeof(int))

S2-A: Check if the memory allocation has succeeded

S3: Zero initialize dynamically allocated memory

memset(p,0,sizeof(int))

S4: Read/write on dynamic integer using p

Read op

lhs=*p

write op

*p=rhs

S5: deallocate an integer using free() and make pointer NULL

free(p);
P=NULL;

*/

/* memset function

memset(base address of block of memory to be initialized,initializer,size in bytes of block of memory initialized);

memset(void* p,int val,unsigned int size);

Let x be an address in pointer p.
byte x to byte x+size-1
to be initialized by val

memset(p,0,sizeof(int));

char arr[128];
memset(arr,0,128);

*/





