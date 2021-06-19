#include<stdio.h>
#include<string.h>
#include<assert.h>
#include<stdlib.h>

void test_function(void);

int main(void)
{
	test_function();
	return(0);
}

void test_function(void)
{
	char* pc=NULL;
	unsigned char* puc=NULL;
	long int* pli=NULL;
	float* pf=NULL;
	
	pc=(char*)malloc(sizeof(char));
	assert(pc !=NULL);
	memset(pc,0,sizeof(char));
	*pc = 'A';
	printf("*pc=%c\n",*pc);
	free(pc);
	pc=NULL;

	
	puc=(unsigned char*)malloc(sizeof(unsigned char));
	assert(puc !=NULL);
	memset(puc,0,sizeof(unsigned char));
	*puc= 0xff;
	printf("*puc=%hhu\n",*puc);
	free(puc);
	puc=NULL;
	
	
	pli=(long int*)malloc(sizeof(long int));
	assert(pli !=NULL);
	memset(pli,0,sizeof(long int));
	*pli=0xfffffff0;
	printf("*pli=%ld\n",*pli);
	free(pli);
	pli=NULL;
	

	pf=(float*)malloc(sizeof(float));
	assert(pf !=NULL);
	memset(pf,0,sizeof(float));
	printf("Enter fractional number:\n");
	scanf("%f",pf);
	printf("Entered fraction=%f\n",*pf);
	free(pf);
	pf=NULL;
	

	/* EXERCISE: 
	Repeat float pattern  for unsigned char, char
	unsigned short, short
	unsigned int, int
	unsigned long int, long int
	unsigned long long int, long long int
	float, double
 	*/
}

	
		
	

