#include<stdio.h>

//Looping Exercise - 4
//for loop - division

int main(void)
{
    int i;
    int n;
    int k;

    puts("block 1");
    for(i = 100;i > 0;i = i/2)
        printf("i = %d\n",i);
    //If condition is i >=0, program runs into infinite loop by printing i = 0 infinitely.

    puts("block 2");
    printf("Enter n:");
    scanf("%d",&n);
    printf("Enter k:");
    scanf("%d",&k);
    for(i = n;i > 0;i = i/k)
        printf("i = %d\n",i);

    return(0);
}
