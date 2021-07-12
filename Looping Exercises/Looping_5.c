#include<stdio.h>

//Looping Exercise - 5
//for loop - left shift 
//left shift by 1 ~ multiplication by 2

int main(void)
{
    int i;
    int n;
    int k;

    puts("block 1");
    for(i = 1;i < 256;i = i << 2)
        printf("i = %d\n",i);
    
    puts("block 2");
    for(i = 1;i <= 256;i <<= 2)
        printf("i = %d\n",i);

    puts("block 3");
    printf("Enter n:");
    scanf("%d",&n);
    printf("Enter k:");
    scanf("%d",&k);
    for(i = 1;i < n;i <<= k)
        printf("i = %d\n",i);
    for(i = 1;i <= n;i <<= k) //if i <<= n, program goes into infinite loop printing  i = 1 infinite times.
        printf("i = %d\n",i);
    
    return(0);
}