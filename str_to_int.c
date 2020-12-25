//13)	Convert string to integers
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    char a[100];
    printf("Enter string:");
    gets(a);
    int n = atoi(a);
    printf("The integer is:%d", n);
    return 0;
}
