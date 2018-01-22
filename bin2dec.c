#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int binary2decimal(int T[], int base)
{
    int i, result=0;
    
    for(i=0;i<sizeof(T);i++)
        result+=T[sizeof(T)-i-1]*pow(base, i);
    
    return result;
}

int main(void)
{
    int num;
    int T[]={1,0,1,0};
    
    printf("Enter to which base you want T converted into: ");
    scanf("%d", &num);
    printf("Result = %d\n", binary2decimal(T, num));
    
    system("PAUSE");
    return 0;
}
