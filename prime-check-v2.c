#include <stdio.h>

main()
{
	int n, ans, j;
	printf("Enter a number (0 for exit): ");
	scanf("%d", &n);
	while (n != 0)
	{
		ans = 1;
		j = 2;
		while (n % j != 0)
			j++;
		if (2 <= j && j < n)
			ans = 0;
		printf("%d\n", ans);
		scanf("%d", &n);
	}
}
