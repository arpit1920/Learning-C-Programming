//14)	Convert string to lower case
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    char a[100];
    int i = 0;
    printf("Enter string:");
    gets(a);
    while (a[i] != '\0') {
        if (a[i] >= 'A' && a[i] <= 'Z') {
            a[i] = a[i] + 32;
        }
        i++;
    }
    printf("The lowercase string is:%s", a);

    return 0;
}
