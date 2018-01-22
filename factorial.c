#include <stdio.h>

int fact(int x)
{
	if (x == 0)
		return 1;
	else
		return x * fact(x - 1);
}

main()
{
	int x;

	printf("Insert a number: ");
	scanf("%d", &x);
	printf("Factorial: %d", fact(x));
	return 0;
}
