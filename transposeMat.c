#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<stdlib.h>
int main()
{
	int a[10][10], b[10][10], m,n,i, j;
	printf("Enter the values of m and n");
	scanf("\t%d\t%d", &m, &n);
	printf("Enter the matrix elements");
	
	for (i=0; i<m; i++)
	{
		for (j=0; j<n; j++)
		{
			scanf("\t%d", &a[i][j]);
		}
	}
	
	for (i=0; i<n; i++)
	{
		for (j=0; j<m; j++)
		{
			b[i][j] = a[j][i];
		}
	}
	
	printf("Transpose of the matrix is:");
	for (i=0; i<n; i++)
	{
		for (j=0; j<m; j++)
		{
			printf("\t%d", &b[i][j]);
		}
		printf("\n");
	}
}
