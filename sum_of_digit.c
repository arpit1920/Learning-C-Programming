//26)	To find out sum of digit of given number.
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n, rev, sum = 0, m;
    printf("Enter number:");
    scanf("%d", &n);
    m = n;
    while (n != 0) {
        rev = n % 10;
        sum = sum + rev;
        n = n / 10;
    }
    printf("Sum of digits is:%d", sum);
    return 0;
}
