#include <stdio.h>

int fib(int x)
{
	if (x < 2)
		return x;
	else
		return (fib(x - 1) + fib(x - 2));
}

int main(void)
{
	int n, i;
	while (1)
	{
		printf("Enter a number: ");
		scanf("%d", &n);
		printf("Fibonacci sequence: %d\n", fib(n));
	}
	return 0;
}
