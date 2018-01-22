#include <stdio.h>
#include <stdlib.h>

int fib1(int n)
{
    int k;
    int f=0;
    int i=1;
    for(k=0;k<n;k++)
    {
        f=f+i;
        i=f-i;
    }
    return f;
}

int main(void)
{
    int x;

    printf("Enter a number: ");
    scanf("%d", &x);
    printf("Result: %d\n", fib1(x));
    system("PAUSE");
    return 0;
}
