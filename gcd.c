// 38) 	To find out G.C.D. of two numbers.
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n1,n2;
    printf("Enter first and second number:\n");
    scanf("\n%d\t%d",&n1,&n2);
    while(n1!=n2)
    {
        if(n1>n2)
            n1=n1-n2;
        else
            n2=n2-n1;
    }
     printf("\nGCD is:%d",n1);
    return 0;
}


