#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int print_fact_exp(int n)
{

	if (n <= 1) {
		printf("1");
		return (1);
	}
	else {
		printf("%d * ", n);
		return (n * print_fact_exp(n - 1));
	}
}
int main(void)
{
	int n;
	printf("Enter a number:");
	scanf("%d", &n);
	printf("%d! = ", n);
	print_fact_exp(n);
	printf("\n");
}