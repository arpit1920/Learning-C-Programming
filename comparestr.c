//3)	Compare given strings.  (using character array & character pointers. Dont use Library functions)
#include<stdio.h>
#include<stdlib.h>
int main()
{
    char a[100],b[100];
    int i=0,k,j=0,flag=0;
    printf("Enter first string:\n");
    scanf("%s",&a);
    printf("Enter second string:\n");
    scanf("%s",&b);

            while(a[i]!='\0'|| b[j]!='\0')
            {
                i++,j++;
            }
            if(i==j)
            {
                    for(k=0;k<i;k++)
                    {
                        if(b[k]==a[k])
                        {
                            flag=1;
                        }
                        else
                        {
                            flag=0;
                        }
                    }
            }
            if(flag==1)
                printf("strings are equal");
            else
                printf("strings are not equal");

    return 0;
}
