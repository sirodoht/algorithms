#include <stdio.h>
#include <stdlib.h>

int isprime(int number)
{
    int i;
    
    for (i=2; i<number; i++)
        if (number % i == 0 && i != number)
            return 0;
    
    return 1;
}

int main(void)
{
    int n;
    
    printf("Enter a number: ");
    scanf("%d", &n);
    isprime(n)?printf("%d is a prime number.\n", n):printf("%d is NOT a prime number.\n", n);
    
    system("PAUSE");
    return 0;
}
