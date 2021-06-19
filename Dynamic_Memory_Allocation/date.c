#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<assert.h>

struct Date
{
	int day;
	int month;
	int year;
};

struct Date* allocate_date(int init_day,int init_month,int init_year);
int is_date_valid(int day,int month,int year);

int get_day(struct Date* p_date);
int get_month(struct Date* p_date);
int get_year(struct Date* p_date);

void set_day(struct Date* p_date, int new_day);
void set_month(struct Date* p_date, int new_month);
void set_year(struct Date* p_date, int new_year);

void deallocate(struct Date* p_date);

int main(void)

{
	
}

struct Date* allocate_date(int init_day,int init_month,int init_year)
{
	struct Date* p_date=NULL;

	p_date=(struct Date*)malloc(sizeof(struct Date));
	assert(p_date !=NULL);
	memset(p_date,0,sizeof(struct Date));

	p_date->day = init_day;
	p_date->month = init_month;
	p_date->year =init_year;

	return(p_date);

}

int is_date_valid(int day,int month,int year)
{
	return(1);
}

int get_day(struct Date* p_date)
{
	return(p_date->day);
}

int get_month(struct Date* p_date)
{
	return(p_date->month);
}

int get_year(struct Date* p_date)
{
	return(p_date->year);
}

void set_day(struct Date* p_date,int new_day)
{
	if(is_date_valid(new_day,p_date->month,p_date->year)!=1){
		puts("invalid date...exiting");
		exit(-1);
	}
	p_date->day=new_day;
}

void set_month(struct Date* p_date,int new_month)
{
	if(is_date_valid(p_date->day,new_month,p_date->year)!=1){
		puts("invalid month....exiting");
		exit(-1);
	}
	p_date->month=new_month;
}

void set_year(struct Date* p_date,int new_year)
{
	if(is_date_valid(p_date->day,p_date->month,new_year)!=1){
		puts("invalid year...exiting");
		exit(-1);
	}
	p_date->year=new_year;
}

void deallocate_date(struct Date* p_date){
	free(p_date);
	p_date=NULL;
}


	
