#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int isprime(int number)
{
    int i;
    double limit=sqrt(number)+1;
    // printf("limit of %d: %g\n", number, limit);
    
    if(number==2)
        return 1;
    if(number%2==0)
        return 0;
    for(i=3; i<limit; i+=2)
        if (number % i == 0)
            return 0;
    
    return 1;
}

int main(void)
{
    long unsigned int n;
    
    printf("Enter a number: ");
    scanf("%lu", &n);
    
    //isprime(n)?printf("%llu is a prime number.\n", n):printf("%llu is NOT a prime number.\n", n);
    
    if(isprime(n))
        printf("%lu is a prime number.\n", n);
    else
        printf("%lu is NOT a prime number.\n", n);
    
    fflush(stdin);
    printf("\nPress enter key to quit.");
    getchar();
    return 0;
}
