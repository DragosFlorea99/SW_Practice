#include<stdio.h>
#define N 10

int main()
{
	int i;
	int A[N];
	for (i = 0; i < N; i++) {
		printf("enter elements of array:\n");
		scanf_s("%d", &A[i]);
	}

	for (i = 0; i < N; i++){
		printf("elements of array are:%d\n", A[i]);}

}