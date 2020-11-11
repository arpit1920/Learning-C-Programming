//40) To convert decimal number to binary number.
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
    int n1,rem,n2=0,i=1;
    printf("Enter first number:");
    scanf("\n%d",&n1);
    while(n1!=0)
    {
        rem=n1%2;
        n1=n1/2;
        n2=n2+(rem*i);
        i=i*10;
    }
    printf("\nBinary number is:%d",n2);
    return 0;
}

