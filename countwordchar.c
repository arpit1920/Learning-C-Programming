//8) Count number of words, characters, uppercase letters, vowels in given string.
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
    char a[100];
    int i=0, wc=1,uc=0,vc=0;
    printf("Enter string:\n");
    gets(a);
    int len=strlen(a);
    for(i=0;i<len;i++)
    {
        if(isspace(a[i]))
            wc++;
        if(a[i]=='a'|| a[i]=='e'||a[i]=='i'||a[i]=='o'||a[i]=='u')
            vc++;
        if(isupper(a[i]))
            uc++;

    }
    printf("\nwords are:%d",wc);
    printf("\ncharacters are:%d",len);
    printf("\nuppercase letters are:%d",uc);
    printf("\nvowels are:%d",vc);
    return 0;
}
