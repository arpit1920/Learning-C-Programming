//55) C program to convert temperature from Celsius to Fahrenheit and vice versa.
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
    float a1,a2;
    int n;
    printf("\n 1.Convert temperature from celsius to fahrenheit:");
    printf("\n2.Convert temperature from fahrenheit to celsius:");
    scanf("\n%d",&n);
    if(n==1)
    {
        printf("\nEnter temperature:");
        scanf("%f",&a1);
        a2=(a1*1.8)+32;
        printf("%f",a2);
    }
    else if(n==2)
    {
        printf("\n Enter temperature:");
        scanf("%f",&a1);
        a2=(a1-32)/1.8;
        printf("%f",a2);
    }
    else
        printf("Enter correct choice");

return 0;
}

