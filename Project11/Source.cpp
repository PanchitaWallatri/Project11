#include<stdio.h>
int main()
{
	int n, i;
	printf("enter number : ");
	scanf_s("%d", &n);
	printf("count from 1 to %d : \n", n);
	for (i = 1; i <= n; i++) printf("%d", i);
	return 0;
}