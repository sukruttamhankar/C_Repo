#include<stdio.h>
#include<stdlib.h>

/* Type Annotation

int n;
char c;
float f;
double d;

Address of type T: This itself is made into a data type
What is the type annotation of data type "address of type T"
T*

T* p=&objT;

objT ->(value wise unsigned integer) -> type wise T*
type of (RHS) = TYPE OF (&objT) = T*
type of (LHS) = type of (p) = T*

type(LHS)=TYPE(RHS)

therefore

T* p = &objT; will pass the type checking part of compiler
(type checking is a part of semantic analysis)
that means this statement is semantically correct.

*/

int n=100;

/* address of integer -> int */

/* &n -> will generate numerical address (valuewise &n -> unsigned integer)
(typewise -> address of integer -> int*)

if you want to create something to hold the address of integer

int* p = &n;

*/

int main(){
}

