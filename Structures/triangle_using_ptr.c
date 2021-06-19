#include<stdio.h>
#include<stdlib.h>

struct point2d {

	float x;
	float y;
};

struct triangle {

	struct point2d *p_A;
	struct point2d *p_B;
	struct point2d *p_C;
};

/* information structures for holding coordinate data of A,B,C */

struct point2d A;
struct point2d B;
struct point2d C;

/*information structure for holding point2d information structures of vertices of triangle */

struct triangle T;

int main(void)

{
	struct triangle *pT = NULL;

	pT = &T;
	pT->p_A = &A;
	pT->p_B = &B;
	pT->p_C = &C;
	

	/* to access x and y of A
	pT->p_A->x   &   pT->p_A->y
	SImilarly for B and C
	pT->p_B->x   &   pT->p_B->y
	pT->p_C->x   &   pT->p_C->y */

}
