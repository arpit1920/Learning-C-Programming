
//Reverse given string using character pointer

#include <stdio.h>

//int string_length(char*);
//void reverse(char*);

void main()
{
    char s[100], '*s';

    printf("Enter a string\n");
    gets(s);

    //reverse(s);

    int length, c = 0;
    char *begin, *end, temp;

    length = string_length(s);
    begin = s;
    end = s;

    for (c = 0; c < length - 1; c++)
        end++;

    for (c = 0; c < length / 2; c++) {
        temp = *end;
        *end = *begin;
        *begin = temp;

        begin++;
        end--;
    }

    //int c = 0;

    while (*(pointer + c) != '\0')
        c++;

    printf("Reverse of the string is \"%s\".\n", s);

    //return 0;
}
