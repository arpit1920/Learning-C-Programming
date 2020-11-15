//31) To find largest among three numbers using conditional operator
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int a1,a2,a3,greater;
    printf("Enter First, Second and Third Number:");
    scanf("\n%d%d%d",&a1,&a2,&a3);
    greater=(a1>a2&&a1>a3?a1:a2>a3?a2:a3);
        printf("%d is greater",greater);
    return 0;
}

