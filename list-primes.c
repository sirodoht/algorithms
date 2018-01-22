#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int k, ans, j, i, lim;
	
	printf("Enter limit: ");
	scanf("%d", &lim);
	k = 0;
	for (i = 2; i <= lim; i++)
	{
		ans = 1;
		j = 2;
		while (i % j != 0)
			j++;
		if ((j >= 2) && (j < i))
			ans = 0;
		if (ans == 1)
		{
			k++;
			printf("%d\n", i);
		}
	}
	printf("Number of primes: %d\n", k);
	system("PAUSE");
	return 0;
}
