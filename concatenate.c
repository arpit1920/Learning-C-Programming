//10)	Concatenate 2 strings
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
    char a[100],b[100];
    printf("Enter first string:\n");
    scanf("%s",&a);
    printf("Enter second string:\n");
    scanf("%s",&b);
    printf("After concatenation string is:%s\n",strcat(a,b));
    return 0;
}
