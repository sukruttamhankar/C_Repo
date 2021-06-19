#include<stdio.h>
#include<stdlib.h>

int p,q,r;

int main()
{
	int max_element;

	printf("Enter value of p:\n");
	scanf("%d",&p);

	printf("Enter value of q:\n");
	scanf("%d",&q);

	printf("Enter value of r:\n");
	scanf("%d",&r);

	//function call
	max_element = find_max_in_3(p,q,r);
	printf("Maximum of 3 elements is:%d\n",max_element);

}

//Function definition
int find_max_in_3(int n1,int n2,int n3)
{
	int max_element;

	if(n1>n2)
		max_element = n1;
	else
		max_element = n2;
	if(n3>max_element)
		max_element = n3;

	return(max_element);
}
