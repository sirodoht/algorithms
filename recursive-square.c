#include <stdio.h>
#include <stdlib.h>

int square(int a, int e)
{
    int i=e;
    if(i==1)
        return a;
    else
    {
        i--;
        return a*square(a, i);
    }
}

int main(void)
{
    int x, exp;
    
    printf("Enter a number: ");
    scanf("%d", &x);
    printf("Enter exponent: ");
    scanf("%d", &exp);
    printf("Result: %d\n", square(x, exp));
    system("PAUSE");
    return 0;
}
