#include <stdio.h>
#include <stdlib.h>
#define N 10

void insertsort(int T[], int n);
void insert(int T[], int n, int a);

main()
{
    int i;
    int T[]={1,7,3,6,5,10,9,2,4,5};

    printf("Initial array:");
    for(i=0;i<N;i++)
        printf(" %d",T[i]);

    insertsort(T,N);

    printf("\nSorted array:");

    for(i=0;i<N;i++)
        printf(" %d",T[i]);
    printf("\n");

    system("PAUSE");
}


void insertsort(int T[], int n)
{
    int i;
    for(i=0;i<n;i++)
        insert(T,i,T[i]);
}

void insert(int T[], int n, int a)
{
    int temp, found=0, k, i, j, m;

    T[n]=a;
    i=0;
    j=n-1;
    while(i<=j && found==0)
    {
        k=(i+j)/2;
        if(a==T[k])
            found=1;
        else if(a>T[k])
            i=k+1;
        else
            j=k-1;
    }

    if(found)
    {
        printf("\nFor i = %d\n", k);
        temp=T[k];
        T[k]=T[n];
        T[n]=temp;

    }
    else
    {
        for(m=n-1;m>=i;m--)
        {
            temp=T[m];
            T[m]=T[m+1];
            T[m+1]=temp;
        }
    }
}
