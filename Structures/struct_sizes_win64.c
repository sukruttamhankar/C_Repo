#include<stdio.h>

struct Date
{
	int day;
	int month;
	int year;
};

struct Date d1;

struct Student
{
	int st_roll_number;
	float st_marks;
	float st_attendance;
	struct Date st_date_of_birth;
};

struct Student s1;
float a;
int b;

int main(void)
{
	printf("size of d1: %zu\n",sizeof(d1));
	printf("size of s1: %zu\n",sizeof(s1));
	printf("size of a: %zu\n",sizeof(a));
	printf("size of b: %zu\n",sizeof(b));
	printf("size of d1: %u\n",sizeof(d1));
	printf("size of s1: %u\n",sizeof(s1));
	return(0);
}
	
