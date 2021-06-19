#include<stdio.h>

struct Date
{
	int day;
	int month;
	int year;
};

/*This is structure declaration */
/* so no memory will be allocated to it. int day; int month; int year; though appear to be definition statements,
 they are written inside struct Date so they are declaration statements so no memory is allocated to them but they are written outside struct, then memory will be allocated as they will be definition statements */

struct Student
{
	int st_roll_number;
	float st_marks;
	float st_attendance;
	struct Date st_date_of_birth;

};

/* Again struct Date st_date_of_birth is written inside struct Student, it is declaration statement so no memory will be allocated to
it. it is written outside of struct, it is definition statement and memory will be allocated. */

struct Date st_date_of_birth; /* structure definition statment (outside the structure declaration written) */

struct Student 
{
	int st_roll_number;
	float st_marks;
	float st_attendance;
	struct Date
	{
		int day;
		int month;
		int year;
	}st_date_of_birth;
};

/* again here this statement:

struct Date
{
	int day;
	int month;
	int year;
}st_date_of_birth;

is written inside struct Student, it is declaration statement and no memory will be allocated, if the same statement is written outside the struct, it is the definition statement and memory will be allocated.
*/

struct Date
{
	int day;
	int month;
	int year;
}st_date_of_birth;  /*structure definition statement

