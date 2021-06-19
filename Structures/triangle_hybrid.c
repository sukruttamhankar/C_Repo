#include<stdio.h>
#include<stdlib.h>

struct point2d
{
	float x;
	float y;
};

struct triangle
{
	struct point2d A;
	struct point2d B;
	struct point2d C;
};

struct triangle T;

int main()
{
	struct T* pT = NULL;
	pT = &T;
	
	/* to access x and y of A B C
	pT->A.x
	pT->A.y
	pT->B.x
	pT->B.y
	pT->C.x
	pT->C.y
	*/

 	return(0);
}

