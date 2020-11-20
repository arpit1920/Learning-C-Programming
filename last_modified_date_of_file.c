//To know last date of modification of any file.
#include<stdio.h>
#include<time.h>
#include<sys/stat.h>
int main()
{
    struct stat status;
    FILE *fp;
    fp=fopen("ascii.c","r");
    fstat(fileno(fp),&status);
    printf("Last date of modification:%s",ctime(&status.st_ctime));
    return 0;
}
