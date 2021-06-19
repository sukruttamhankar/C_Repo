#include<stdio.h>


struct Date
{
	int day;
	int month;
	int year;
};

struct Date d1={21,1,2021};
struct Date d2;

int main(void)
{
	int dd,mm,yy;

	/*reading structure members from structure instance d1 */
	dd=d1.day;
	mm=d1.month;
	yy=d1.year;

	printf("dd:%d, mm:%d, yy:%d\n",dd,mm,yy);

	/*writing to structure members from structure instance d2 */
	d1.day=12;
	d1.month=6;
	d1.year=1995;

	dd=d1.day;
	mm=d1.month;
	yy=d1.year;

	printf("dd:%d, mm:%d, yy:%d\n",dd,mm,yy);

	printf("Enter day value for d2:");
	scanf("%d\n",&d2.day);

	printf("Enter month value for d2:\n");
	scanf("%d\n",&d2.month);
	
	printf("Enter year value for d2:\n");
	scanf("%d\n",&d2.year);

	printf("dd:%d, mm:%d, yy:%d\n",d2.day,d2.month,d2.year);

	return(0);
}


