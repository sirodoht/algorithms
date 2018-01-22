#include <stdio.h>
#include <stdlib.h>

int count_numbers (int num)
{
	int count=0;
	
	if (num==0)
		count++;
	while (num !=0)
	{
		count++;
	    num/=10;
	}
	return count;
}

int main(void)
{
    int num, count;
    
    printf("Enter an integer: ");
    scanf("%d", &num);
    printf("You entered: %d\n", num);
    
    count=count_numbers(num);
    printf("Number of digits: %d\n", count);
    
    system("PAUSE");
    return 0;
}
