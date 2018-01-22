#include <stdio.h>
#include <stdlib.h>

int rus(int a, int b);

main()
{
    int a, b;
    
    printf("Enter two positive integers: ");
    scanf("%d", &a);
    scanf("%d", &b);
    
    printf("%d X %d = %d\n", a, b, rus(a, b));
    
    system("PAUSE");
}

int rus(int a, int b)
{
    int result=0;
    
    while(a>=1)
    {
        if(a%2==1)
            result=result+b;
        a=a/2;
        b=b*2;
    }
    
    /*while(1)
    {
        result += (a & 1) * b;
        if(a == 1)
            break;

        a = a / 2;
        b = b * 2;
    }*/
    
    return result;
}
