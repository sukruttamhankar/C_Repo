#include<stdio.h>

//Looping Exercise - 6
//for loop - right shift
//right shift by 1 ~ division by 2

int main(void)
{
    int i;
    int n;
    int k;

    puts("block 1");
    for(i = 256;i > 0;i = i >> 2)
        printf("i = %d\n",i);

    puts("block 2");
    printf("Enter n:");
    scanf("%d",&n);
    printf("Enter k:");
    scanf("%d",&k);
    for(i = n;i > 0;i >>= k)
        printf("i = %d\n",i);
    
    return(0);
}