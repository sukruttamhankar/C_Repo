#include<stdio.h>
#include<stdlib.h>

/*character type*/

char c = 'A';
unsigned char uc = 100;

/*integer type*/

short s = -200;
unsigned short us = 200;

int i = -400;
unsigned int ui = 400;

long int lng_i = -600;
unsigned long int u_lng_i = 600;

long long int vl_i = -800;
unsigned long long int u_vl_i = 800;

/*floating point data types*/

float f = 3.14f;
double d = 433.36;

/* define address type variables of all types */
char* pc;
unsigned char* upc;

short* ps;
unsigned short* ups;

int* pi;
unsigned int* upi;

long int* p_lng_i;
unsigned long int* up_lng_i;

long long int* p_vl_i;
unsigned long long int* up_vl_i;

float* pf;
double *pd;

int main(){

pc =&c;
upc=&uc;

ps=&s;
ups=&us;

pi=&i;
upi=&ui;

p_lng_i=&lng_i;
up_lng_i=&u_lng_i;

p_vl_i=&vl_i;
up_vl_i=&u_vl_i;

pf=&f;
pd=&d;

printf("pc = %p\n",pc);
printf("upc = %p\n",upc);
printf("ps = %p\n",ps);
printf("ups = %p\n",ups);
printf("pi = %p\n",pi);
printf("upi = %p\n",upi);
printf("p_lng_i = %p\n",p_lng_i);
printf("up_lng_i = %p\n",up_lng_i);
printf("p_vl_i = %p\n",p_vl_i);
printf("up_vl_i = %p\n",up_vl_i);
printf("pf = %p\n",pf);
printf("pd = %p\n",pd);

return(0);

}

/* int n;
&n -> address of integer variable n

To store the value of n, we need address of int type variable 

int* p;

p=&n;

address of int ->data type name
pointer to int 

T* ->pointer to T
T* p;

*/

10
int n;

/******************************/
/*

int *p;
int m;
&m;

10->integer
n->integer variable

&n->pointer                    |address
int* p->pointer variable       |pointer 

pointer to T -> T type chya object cha base address store 
karnyasathi allocate keleli jaga

*/





