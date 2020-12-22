//1)Display string length.  (using character array & character pointers. Dont use Library functions)
#include <stdio.h>
#include <stdlib.h>

int main()
{
    char a[100];
    int i = 0;
    printf("Enter string:\n");
    scanf("%s", &a);
    while (a[i] != '\0') {
        i++;
    }
    printf("length is %d", i);
    return 0;
}
