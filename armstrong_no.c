//16)	Check given number is Armstrong number or not.
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n,rev,sum1=0,sum,m;
    printf("Enter number:");
    scanf("%d",&n);
    m=n;
    while(n!=0)
    {
        sum=n%10;
        sum1=sum1+(sum*sum*sum);
        n=n/10;
    }
    if(sum1== m)
        printf("Number is armstrong");
    else
        printf("number not armstrong");
    return 0;
}
