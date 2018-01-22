#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void sieve(int n[])
{
    int i, j, k;
    
    
    for(i=0;i<10;i++)
    {
        for(j=0;j<10;j++)
        {
            if(!n[i][j])
            {
                while
                
}

int main(void)
{
    int n[10][10], i, j, s=1;
    
    for(i=0;i<10;i++)
        for(j=0;j<10;j++)
            n[i][j]=0;
    
    for(i=0;i<10;i++)
    {
        for(j=0;j<10;j++)
            printf("%d ",n[i][j]);
        printf("\n");
    }
    
    system("PAUSE");
    return 0;
}
