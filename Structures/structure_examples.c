#include <stdio.h>
#include <stdlib.h>
#include <math.h>

struct point2d
{
	float x,y;
};

int main()
{
	struct point2d p1={1.1f, 2.2f};
	struct point2d p2={-4.3f, 1.8f};
	float distance = 0.0f;
	float delta_x = 0.0f;
	float delta_y = 0.0f;
	
	/* compute the distance between points p1 and p2

	P1(x1,y1) P2(x2,y2)

	d(P1,P2)= sqrt((x2-x1)^2 + (y2-y1)^2) */

	delta_x = p2.x - p1.x;
	delta_y = p2.y - p1.y;

	distance = sqrt(pow(delta_x,2)+pow(delta_y,2));
	printf("distance between p1 and p2 is %.3lf\n",distance);
		
	return(0);

}

