#include <stdio.h>
#include <stdlib.h>

int multiplication(int x, int y)
{
    static int z;
    
    if(y==0)
        return 0;
    else
        z = multiplication(x, y/2);
    
    if(y%2==0)
        return 2*z;
    else
        return x+2*z;
}

int main(void)
{
    int num1, num2;
    
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);
    printf("Product: %d\n", multiplication(num1, num2));
    
    system("PAUSE");
    return 0;
}
