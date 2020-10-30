// 41) To add binary numbers.
#include<stdio.h>
#include<stdlib.h>
int main()
{
    long n1,n2;
    int sum[30],i=0,rem=0;
    printf("Enter first number:\n");
    scanf("%ld",&n1);
    printf("Enter second number:\n");
    scanf("%ld",&n2);
    while(n1!=0 || n2!=0)
    {
        sum[i++]=(n1%10+n2%10+rem)%2;
        rem=(n1%10+n2%10+rem)/2;
        n1=n1/10;
        n2=n2/10;
    }
    if(rem!=0)
        sum[i++]=rem;
    i--;
    while(i>=0)
        printf("%d",sum[i--]);
    return 0;
}
