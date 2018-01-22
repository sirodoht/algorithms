#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int S[8]={5,1,5,2,1,2,1,5};
    int m=5, n=8, i, C[5], T[8];
    
    printf("Pre-sort array: ");
    for(i=0;i<n;i++)
        printf("%d ", S[i]);
    printf("\n");
    
    for(i=0;i<m;i++)
        C[i]=0;
    for(i=0;i<n;i++)
        T[i]=0;
    for(i=0;i<n;i++)
        C[S[i]-1]=C[S[i]-1]+1;
    for(i=1;i<m;i++)
        C[i]=C[i]+C[i-1];
    for(i=n-1;i<0;i--)
    {
        T[C[S[i]-1]-1]=S[i];
        C[S[i]-1]=C[S[i]-1]-1;
    }
    
    printf("Sorted array:   ");
    for(i=0;i<n;i++)
        printf("%d ", T[i]);
    printf("\n");
    
    system("PAUSE");
    return 0;
}
