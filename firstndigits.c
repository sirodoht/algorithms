// This program returns the first N digits of a given number

#include <stdio.h>
#include <stdlib.h>

int digits(int num) // This function returns the number of digits of a number.
{
    int result=0;

    while(num)
    {
        result++;
        num/=10;
    }
    
    return result;
}

int firstndigits(int number, int number_of_digits) // This function returns the first N digits of a given number.
{
    int result, size=0, number_clone;
    
    number_clone=number;
    while(number_clone)
    {
        size++;
        number_clone/=10;
    }
    
    number_of_digits=size-number_of_digits+1;
    
    while(number_of_digits)
    {
        result=number;
        number/=10;
        number_of_digits--;
    }
    //result%=10;
    
    return result;
}

int main(void)
{
    int i, n;

    printf("Enter a number (0 for exit): ");
    scanf("%d", &i);
    
    while(i!=0)
    {
        printf("Enter a number from 1 to %d: ", digits(i));
        scanf("%d", &n);
        printf("The first %d digits of %d are: %d\n", n, i, firstndigits(i, n));
        printf("Enter a number (0 for exit): ");
        scanf("%d", &i);
    }

    return 0;
}
