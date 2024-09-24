#include<stdio.h>

int main()
{
	int A[2][2] = { {2,3},{5,4} };
	int i;
	int j;
	int sumRow=0;
	int sumColumn=0;
	for (i = 0; i < 2; i++)
	{
		
		for (j = 0; j < 2; j++)
		{
			
			sumRow = sumRow + A[i][j];
			
		}
		
		printf("sum row is\n", sumRow);
	}
	
}
