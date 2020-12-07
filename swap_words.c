//54) Program to swap two words/nibbles of a byte.
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
    char a[100],b[100],c[100];
    int len1,len2,i,j;
    printf("Enter first word:\n");
    gets(a);
    printf("Enter second:\n");
    gets(b);
        len1=strlen(a);
        len2=strlen(b);
        j=len1+len2;
        for(i=0;i<j;i++)
        {
            c[i]=a[i];
            a[i]=b[i];
            b[i]=c[i];
        }
    printf("After swapping first string is:%s",a);
    printf("\nAfter swapping second string is:%s",b);

return 0;
}
