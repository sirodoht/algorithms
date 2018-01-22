#include <stdio.h>
#include <stdlib.h>

int reverser(int n)
{
    int rev=0;
    
    while(n)
    {
        rev=rev*10+(n%10);
        n=n/10;
    }
    return rev;
}

int main(void)
{
    int num, reverse_num;

    printf("Enter an integer: ");
    scanf("%d", &num);
    printf("You entered: %d\n", num);
    
    reverse_num=reverser(num);
    printf("Reverse number: %d\n", reverse_num);
    
    system("PAUSE");
    return 0;
}
