// selectsort with position-array
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int i, j, min, index, temp;
    int T[]={2,5,97,56,84,15,23,36};
    int pos[8]={1,2,3,4,5,6,7,8};
    
    printf("Unsorted Array: ");
    for(i=0;i<8;i++)
        printf("%d ", T[i]);
    
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
        
        temp=pos[i];
        pos[i]=pos[index];
        pos[index]=temp;
    }
    
    printf("\nSorted Array:   ");
    
    for(i=0;i<8;i++)
        printf("%d ", T[i]);
    
    printf("\nPosition Array: ");
    
    for(i=0;i<8;i++)
        printf("%d ", pos[i]);
    
    printf("\n");
    system("PAUSE");
    return 0;
}
