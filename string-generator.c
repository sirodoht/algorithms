// Generate incremental strings

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	char i, j, k, l, m;
	FILE *file;
	
	if((file=fopen("out.txt", "w")) == NULL)
		printf("File error.\n");
	
	for (i = 65; i < 90; i++)
	{
		for (j = 65; j < 90; j++)
		{
			for (k = 65; k < 90; k++)
			{
				for (l = 65; l < 90; l++)
				{
					for (m = 65; m < 90; m++)
					{
						fprintf(file, "%c%c%c%c%c%c\n", i, j, k, l, m);
						//printf("%c%c%c%c%c%c\n", i, j, k, l, m, n);
					}
				}
			}
		}
	}
	
	printf("\nPress a key to quit.");
	getchar();
	return 0;
}
