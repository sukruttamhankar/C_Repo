#include<stdio.h>
#include<stdlib.h>

void test(){
	puts("Hey!");
}

int main(){
	void (*pfun)(void)=&test;
	return 0;
}

/*
'a'=500;
3.14f=600;
*/

