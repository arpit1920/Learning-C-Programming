//23)	To print ASCII value of all characters.
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
    char a[100];
    printf("Enter the string");
    scanf("%s",a);
    int len=strlen(a);
    for(int i=0;i<len;i++)
    {
        printf("%d\t",a[i]);
    }
    return 0;
}
