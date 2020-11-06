//12)	Copy string to other
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
    char a[100],b[100];
    char c;
    int i,j=0,count;
    printf("Enter string:\n");
    gets(a);
    int len=strlen(a);
    for(i=0;i<len;i++)
    {
        b[j]=a[i];
        j++;
    }
    b[j]='\0';
    printf("After copying string to B the string is:%s",b);
    return 0;
}
