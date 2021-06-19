#include<stdio.h>
#include<stdlib.h>

struct Date
{
	int day;
	int month;
	int year;
};

struct Date d;

int main(void)

{
	d.day=10;
	d.month=4;
	d.year=2020;
	
	printf("%d-%d-%d\n",d.day,d.month,d.year);
	
	d.day=11;
	d.month=5;
	d.year=2021;
	
	printf("%d-%d-%d\n",d.day,d.month,d.year);

	exit(0);
}

