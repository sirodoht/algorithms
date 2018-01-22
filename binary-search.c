#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int i, j, found=0, k;
    int T[]={1,2,6,8,9,11,15,33,65,98};
    int n=11;
    
    i=0;
    j=10;
    while(i<=j && found==0)
    {
        k=(i+j)/2;
        if(n==T[k])
            found=1;
        else if(n>T[k])
            i=k+1;
        else
            j=k-1;
    }
    
    found?printf("Found at %d.\n", k):printf("Not found.\n");
    
    system("PAUSE");
    return 0;
}
