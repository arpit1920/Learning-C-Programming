/*
Program to print full pyramid using *

        *
      * * *
    * * * * *
  * * * * * * *
* * * * * * * * *

*/
#include<stdio.h>
#include<stdlib.h>
int main()
{

    int i,j,k;
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=9;j++)
        {
            if(j>=6-i&&j<=4+i)
            {
                   printf("*");
            }
            else
                printf(" ");
        }
        printf("\n");
    }
}