//Program to calculate Hailstone sequences
#include <stdio.h>
#include <stdlib.h>

void hailstonef(int n)
{
    while(n>1)
    {
        printf("%d\n", n);
        if(n%2==1)
            n=(3*n)+1;
        else
            n=n/2;
    }
    printf("Hailstone ending = %d\n",n);
}

main()
{
    int lim;
    
    printf("Enter Hailstone limit: ");
    scanf("%d", &lim);
    hailstonef(lim);
    system("PAUSE");
}
