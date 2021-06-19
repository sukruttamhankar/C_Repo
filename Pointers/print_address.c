#include<stdio.h>
#include<stdlib.h>

/* if v is a defined variable in C program then
&v yields the address of v in numerical form */

char cLetter ='A';
shrt sNum= -100;
int iNum=100;
long int liNum=0x10203040
long long int lliNum=0x2030405060708;
float fNum=3.14f;
double dNum=54.32224533253;

int main(){

	printf("address of cLetter = %p\n",&cLetter);
	printf("address of sNum = %p\n",&sNum);
	printf("address of iNum = %p\n",&iNum);
	printf("address of liNum = %p\n",&liNum);
	printf("address of lliNum = %p\n",&lliNum);
	printf("address of fNum = %p\n",&fNum);
	printf("address of dNum = %p\n",&dNum);
	exit(0);
}


