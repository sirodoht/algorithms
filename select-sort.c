// selectsort
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int i, j, min, index;
    int T[]={2,5,97,56,84,15,23,36};
    
    for(i=0;i<8;i++)
    {
        min=T[i];
        index=i;
        for(j=i+1;j<8;j++)
            if(T[j]<min)
            {
                min=T[j];
                index=j;
            }
        
        T[index]=T[i];
        T[i]=min;
    }
    
    for(i=0;i<8;i++)
        printf("%d, ", T[i]);
    
    printf("\n");
    
    system("PAUSE");
    return 0;
}
