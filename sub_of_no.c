//29)	To subtract two numbers without using subtraction operator.
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int m, n, result;
    printf("Enter first and second number:\n");
    scanf("%d\n%d", &m, &n);
    while (n != 0) {
        m--;
        n--;
    }
    printf("Substraction is:%d", m);
    return 0;
}
