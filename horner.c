#include <stdio.h>
#include <stdlib.h>

int horner(int T[], int r)
{
    int i, result;
    
    result=T[0];
    for(i=1;i<5;i++)
        result=(result*r)+T[i];
    
    return result;
}

int main(void)
{
    int num;
    int T[]={2,-8,11,-1,-10};
    
    printf("Enter x: ");
    scanf("%d", &num);
    printf("Result = %d\n", horner(T, num));
    
    system("PAUSE");
    return 0;
}
