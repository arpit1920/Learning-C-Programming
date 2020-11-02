//6)	Check if given 2 strings are anagrams.
#include<stdio.h>
#include<conio.h>
int find(char[],char[]);
int main()
{
    char a[100],b[100];
    int flag;
    printf("Enter first string:\n");
    scanf("%s",&a);
    printf("Enter second string:\n");
    scanf("%s",&b);
    flag=find(a,b);
    if(flag==1)
        printf("strings are anagrams");
    else
        printf("strings are not anagrams");
    return 0;
}
int find(char a[],char b[])
{
    int n1[26]={0},n2[26]={0},i=0;
    while(a[i]!='\0')
    {
        n1[a[i]-'a']++;
        i++;
    }
    i=0;
    while(b[i]!='\0')
    {
        n2[b[i]-'a']++;
        i++;
    }
    for(i=0;i<26;i++)
    {
        if(n1[i]!=n2[i])
            return 0;
    }
    return 1;
}
