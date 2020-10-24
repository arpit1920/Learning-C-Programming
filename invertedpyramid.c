/*
* * * * *
* * * *
* * *
* *
*

*/
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int i,k=1,j;
    for( i=0;i<=4;i++)
    {
        for(int j=0;j<=4;j++)
        {
            if(j>=i)
            printf(" *");
        }
        printf("\n");

    }
    return 0;
}

