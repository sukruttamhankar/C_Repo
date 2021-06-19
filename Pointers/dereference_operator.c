#include<stdio.h>
#include<stdlib.h>

int n=10;
char c='A';
float f=3.14f;

int n_copy;
char c_copy;
float f_copy;

int* p_int;
char* p_char;
float* p_float;

int main(){

p_int=&n;
p_char=&c;
p_float=&f;

/* data ->read/write */

/* *p_int ->dereference operator */

n_copy= *p_int;

return(0);

}

/* *p -> fetch address in p.
* read on that address if *p is on RHS
* write to the address if *p is on LHS
*
* how many bytes read/write ??
* sizeof(typeof(pointer))
*/


