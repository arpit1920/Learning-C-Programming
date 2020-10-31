//28)	To add two numbers without using addition operator.
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int m,n,result;
    printf("Enter first and second number:\n");
    scanf("%d\n%d",&m,&n);
    while(n!=0)
    {
        m++;
        n--;
    }
    printf("Addition is:%d",m);
    return 0;
}
