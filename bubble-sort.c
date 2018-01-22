#include <stdio.h>
#include <stdlib.h>
#include <complex.h>
#include <inttypes.h>
#include <assert.h>

int main(void)
{
    int i, j, t, temp;
    int T[]={5,2,9,6,7,1,8,4};
    complex a;
    
    printf("Unsorted Array: ");
    for(i=0;i<8;i++)
        printf("%d ", T[i]);
    
    i=8;
    t=-1;
    assert(i<=5);
    while(i>=1 && t!=0)
    {
        t=0;
        for(j=0;j<i-1;j++)
        {
            if(T[j]>T[j+1])
            {
                temp=T[j];
                T[j]=T[j+1];
                T[j+1]=temp;
                t++;
            }
        }
        i--;
    }
    
    printf("\nSorted Array:   ");
    
    for(i=0;i<8;i++)
        printf("%d ", T[i]);
    
    /*
    printf("\nPosition Array: ");
    
    for(i=0;i<8;i++)
        printf("%d ", pos[i]);
    */
    
    printf("\n");
    system("PAUSE");
    return 0;
}
