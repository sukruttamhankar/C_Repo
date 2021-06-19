#include<stdio.h>
#include<stdlib.h>

struct Date
{

	int day;
	int month;
	int year;
};

struct Student
{

	int st_roll_number;
	float st_marks;
	float st_attendance;
	struct Date st_date_of_birth;
};

struct Student s = {10,76.50,67.80,{21,1,2021}};

int main(void)

{
	int roll;
	float marks,attnd;
	int dd,mm,yy;
	
	/*read from struct*/

	roll=s.st_roll_number;
	marks=s.st_marks;
	attnd=s.st_attendance;

	dd=s.st_date_of_birth.day; /*dot operator used TWICE*/
	mm=s.st_date_of_birth.month;
	yy=s.st_date_of_birth.year;

	printf("roll=%d, marks=%.2f, attnd=%.2f, dd=%d, mm=%d, yy=%d\n",roll,marks,attnd,dd,mm,yy);	

	/*write to struct*/

	s.st_roll_number=20;
	s.st_marks=20.40;
	s.st_attendance=70.65;
	s.st_date_of_birth.day=23; /*dot operator used TWICE*/
	s.st_date_of_birth.month=5;
	s.st_date_of_birth.year=1995;

	return(0);
}


	
