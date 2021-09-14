#include<stdio.h>

int main(void)
{
    int i, j;
    int m = 8, n = 7, k = 3;

    puts("Block 1");
    for(i = 0; i < m; ++i)
        for(j = i; j < n; ++j)
            printf("i = %d j = %d\n",i,j);

    /* Block 1
    i = 0 j = 0
    i = 0 j = 1
    i = 0 j = 2
    i = 0 j = 3
    i = 0 j = 4
    i = 0 j = 5
    i = 0 j = 6
    i = 1 j = 1
    i = 1 j = 2
    i = 1 j = 3
    i = 1 j = 4
    i = 1 j = 5
    i = 1 j = 6
    i = 2 j = 2
    i = 2 j = 3
    i = 2 j = 4
    i = 2 j = 5
    i = 2 j = 6
    i = 3 j = 3
    i = 3 j = 4
    i = 3 j = 5
    i = 3 j = 6
    i = 4 j = 4
    i = 4 j = 5
    i = 4 j = 6
    i = 5 j = 5
    i = 5 j = 6
    i = 6 j = 6
    */

    puts("Block 2");
    for(i = 0; i < m; ++i)
        for(j = i+1; j < n; ++j)
            printf("i = %d j = %d\n",i,j);

    /* 
    Block 2
    i = 0 j = 1
    i = 0 j = 2
    i = 0 j = 3
    i = 0 j = 4
    i = 0 j = 5
    i = 0 j = 6
    i = 1 j = 2
    i = 1 j = 3
    i = 1 j = 4
    i = 1 j = 5
    i = 1 j = 6
    i = 2 j = 3
    i = 2 j = 4
    i = 2 j = 5
    i = 2 j = 6
    i = 3 j = 4
    i = 3 j = 5
    i = 3 j = 6
    i = 4 j = 5
    i = 4 j = 6
    i = 5 j = 6
    */

    puts("Block 3");
    for(i = m; i > 0; --i)
        for(j = i; j > 0; --j)
            printf("i = %d j = %d\n",i,j);

    /*
    Block 3
    i = 8 j = 8
    i = 8 j = 7
    i = 8 j = 6
    i = 8 j = 5
    i = 8 j = 4
    i = 8 j = 3
    i = 8 j = 2
    i = 8 j = 1
    i = 7 j = 7
    i = 7 j = 6
    i = 7 j = 5
    i = 7 j = 4
    i = 7 j = 3
    i = 7 j = 2
    i = 7 j = 1
    i = 6 j = 6
    i = 6 j = 5
    i = 6 j = 4
    i = 6 j = 3
    i = 6 j = 2
    i = 6 j = 1
    i = 5 j = 5
    i = 5 j = 4
    i = 5 j = 3
    i = 5 j = 2
    i = 5 j = 1
    i = 4 j = 4
    i = 4 j = 3
    i = 4 j = 2
    i = 4 j = 1
    i = 3 j = 3
    i = 3 j = 2
    i = 3 j = 1
    i = 2 j = 2
    i = 2 j = 1
    i = 1 j = 1
    */
    
    puts("Block 4");
    for(i = m; i >= 0; --i)
        for(j = i; j >= 0; --j)
            printf("i = %d j = %d\n",i,j);

    /*
    Block 4
    i = 8 j = 8
    i = 8 j = 7
    i = 8 j = 6
    i = 8 j = 5
    i = 8 j = 4
    i = 8 j = 3
    i = 8 j = 2
    i = 8 j = 1
    i = 8 j = 0
    i = 7 j = 7
    i = 7 j = 6
    i = 7 j = 5
    i = 7 j = 4
    i = 7 j = 3
    i = 7 j = 2
    i = 7 j = 1
    i = 7 j = 0
    i = 6 j = 6
    i = 6 j = 5
    i = 6 j = 4
    i = 6 j = 3
    i = 6 j = 2
    i = 6 j = 1
    i = 6 j = 0
    i = 5 j = 5
    i = 5 j = 4
    i = 5 j = 3
    i = 5 j = 2
    i = 5 j = 1
    i = 5 j = 0
    i = 4 j = 4
    i = 4 j = 3
    i = 4 j = 2
    i = 4 j = 1
    i = 4 j = 0
    i = 3 j = 3
    i = 3 j = 2
    i = 3 j = 1
    i = 3 j = 0
    i = 2 j = 2
    i = 2 j = 1
    i = 2 j = 0
    i = 1 j = 1
    i = 1 j = 0
    i = 0 j = 0
    */

    puts("Block 5");
    for(i = m; i > 0; i--)
        for(j = i - 1; j > 0; j--)
            printf("i = %d j = %d\n",i,j);
    
    /*
    Block 5
    i = 8 j = 7
    i = 8 j = 6
    i = 8 j = 5
    i = 8 j = 4
    i = 8 j = 3
    i = 8 j = 2
    i = 8 j = 1
    i = 7 j = 6
    i = 7 j = 5
    i = 7 j = 4
    i = 7 j = 3
    i = 7 j = 2
    i = 7 j = 1
    i = 6 j = 5
    i = 6 j = 4
    i = 6 j = 3
    i = 6 j = 2
    i = 6 j = 1
    i = 5 j = 4
    i = 5 j = 3
    i = 5 j = 2
    i = 5 j = 1
    i = 4 j = 3
    i = 4 j = 2
    i = 4 j = 1
    i = 3 j = 2
    i = 3 j = 1
    i = 2 j = 1
    */

    puts("Block 6");
    for(i = m; i >= 0; i = i - 3)
        for(j = i - 1; j >= 0; j = j - 3)
            printf("i = %d j = %d\n",i,j);

    /*
    Block 6
    i = 8 j = 7
    i = 8 j = 4
    i = 8 j = 1
    i = 5 j = 4
    i = 5 j = 1
    i = 2 j = 1
    */
    
    return(0);
}