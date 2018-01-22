#include <stdio.h>
#include <stdlib.h>

int slowfibf(int n)
{
    if(n<2)
        return n;
    else
        return slowfibf(n-1)+slowfibf(n-2);
}

int fasterthanslowfibf(int n)
{
    int i;
    long int F[5000];

    //F=(int *)malloc(n * sizeof(int));

    F[0]=0;
    F[1]=1;

    for(i=2; i<=n ;i++)
        F[i]=F[i-2]+F[i-1];

    return F[n];
}

main()
{
    int fibn;

    printf("Enter a number (-1 for exit): ");
    scanf("%d", &fibn);

    while(fibn!=-1)
    {
        //printf("Slow Fibonacci(%d)   = %d\n", fibn, slowfibf(fibn));
        printf("Faster Fibonacci(%d) = %d\n", fibn, fasterthanslowfibf(fibn));
        printf("Enter a number (-1 for exit): ");
        scanf("%d", &fibn);
    }

    system("PAUSE");
}

