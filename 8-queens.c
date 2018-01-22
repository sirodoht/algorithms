#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int i, j, k;
	int ck[8][8]; //checkerboard with values 0=threat, 1=available, -1=queen

	for (i = 0; i < 8; ++i)
	{
		for (j = 0; j < 8; ++j)
		{
			ck[i][j]=1;
			printf("%d ", ck[i][j]);
		}
		printf("\n");
	}
	printf("\n");

	for (i = 0; i < 8; ++i)
	{
		for (j = 0; j < 8; ++j)
		{
			if (ck[i][j]==1)
			{
				ck[i][j]=-1;
				for (k = 0; k < 8; ++k)
				{
					ck[k][j]=0;
					ck[i][k]=0;
				}
				break;
			}
			break;
		}
		break;
	}

	for (i = 0; i < 8; ++i)
	{
		for (j = 0; j < 8; ++j)
			printf("%d ", ck[i][j]);
		printf("\n");
	}

	getchar();
	return 0;
}
