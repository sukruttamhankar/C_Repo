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

/*definition of instance variable*/

struct Student s1={10,56.78,80.96,{23,4,1995}};

/*Definition of instance of struct Date*/

struct Date d1={27,3,2021};

/*Following expressions can be used on RHS to read and on LHS to write

s1.st_roll_number
s1.st_marks
s1.st_attendance
s1.st_date_of_birth.day
s1.st_date_of_birth.month
s1.st_date_of_birth.year

*/

/*General Syntax of pointer variable: T* p;
T=struct Date / struct Student
int *p = &n;
p -> pointer to int ->int*
*p ->int
*/

struct Student *p_student; /* definition of pointer variable*/
struct Date *p_date; /*definition of pointer to struct Date*/

int main(void)
{

	/*put address of instance variable to pointer variable*/
	p_student = &s1;
	
	/* typeof(p_student)=struct Student*
	   typeof(*p_student)=struct Student
	*/

	/* RHS - read */
	printf("roll number(s1):%d\n",(*p_student).st_roll_number);
	printf("marks(s1):%.2f\n",(*p_student).st_marks);
	printf("attendance(s1):%.2f\n",(*p_student).st_attendance);
	printf("date of birth(s1):%d-%d-%d\n",(*p_student).st_date_of_birth.day, (*p_student).st_date_of_birth.month, (*p_student).st_date_of_birth.year);
	
	/*LHS - write*/
	(*p_student).st_roll_number=67;
	(*p_student).st_marks=45.68;
	(*p_student).st_attendance=98.67;
	(*p_student).st_date_of_birth.day=21;
	(*p_student).st_date_of_birth.month=7;
	(*p_student).st_date_of_birth.year=2020;

	/*RHS - read*/
	
	printf("roll number(s1):%d\n",(*p_student).st_roll_number);
	printf("marks(s1):%.2f\n",(*p_student).st_marks);
	printf("attendance(s1):%.2f\n",(*p_student).st_attendance);
	printf("date of birth(s1):%d-%d-%d\n",(*p_student).st_date_of_birth.day, (*p_student).st_date_of_birth.month, (*p_student).st_date_of_birth.year);


	p_date=&d1; /* put address of instance variable of struct Date into pointer to struct Date*/

	printf("%d-%d-%d\n",p_date->day, p_date->month, p_date->year);

	/* p_date->day == (*p_date).day
	p_date->month == (*p_date).month
	p_date->year == (*p_date).year
	*/

	p_date->day=20;
	p_date->month=4;
	p_date->year=2022;
	
	printf("%d-%d-%d\n",p_date->day, p_date->month, p_date->year);
	
	return(0);
}
