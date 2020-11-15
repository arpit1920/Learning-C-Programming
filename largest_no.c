//30) To find largest among three numbers using binary minus operator.
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int a1,a2,a3;
    printf("Enter First, Second and Third Number:");
    scanf("\n%d%d%d",&a1,&a2,&a3);
    if(a1-a2>0 && a1-a3>0)
    {
        printf("%d is greater",a1);
    }
    else if(a2-a3>0)
        printf("%d is greater",a2);
    else
        printf("%d is greater",a3);
    return 0;
}
