#include <stdio.h>
#include <stdlib.h>

void pause(void) // This function waits for a newline character to continue.
{
    printf("\n");
    getchar();
}

int pascal(int a, int b)
{
	int result;

	// printf("step1\n");

	if ((a == b) || (b == 1))
	{
		result = 1;
	}
	else
	{
		result = pascal(a-1, b) + pascal(a-1, b-1);		
	}


	// printf("result = %d\n", result);


	return result;
}

int main(int argc, char *argv[])
{
	// int i, j;

	printf("%d\n", pascal(6, 4));

    pause();
    return 0;
}

/*

    1
   1 1
  1 2 1
 1 3 3 1
1 4 6 4 1
   ...

*/