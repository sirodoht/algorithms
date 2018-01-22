/* This program converts real numbers to binary */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define n 20
#define m 10

main(){
    double ar, dek;
    int ak;
    int x[n];
    int y[n];
    int dib[n];
    int k, i=0, j, neg;

    printf("Enter real number:");
    scanf("%lf",&ar);
    printf("Your input: %lf\n", ar);

    neg=0;
    if(ar<0)
    {
        ar=ar*(-1);
        neg=1;
    }
    ak = floor(ar);
    dek = ar - floor(ar);

    while (ak>=1){
        y[i]=ak%2;
        ak=ak/2;
        i++;
    }

    j=0;
    while ((dek!=1) && (j<=m))
    {
        dek=dek - floor(dek);
        dek=dek*2;
        if(dek<1)
            dib[j]=0;
        else
            dib[j]=1;
        j++;
    }

    for(k=0; k<i;k++)
        x[k]=y[i-k-1];

    printf("Binary number:");
    if(neg)
        printf("-");
    for(k=0;k<i;k++)
        printf("%d",x[k]);
    printf(",");
    for(k=0;k<j;k++)
        printf("%d",dib[k]);
    printf("\n");
    system("pause");
}
