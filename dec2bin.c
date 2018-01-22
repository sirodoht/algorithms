#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void dec2bin(int T[], int num)
{
    int i, result=0;
    
    for(i=0;i<5;i++)
    {
        T[4-i]=num%2;
        num=num/2;
    }
}

int main(void)
{
    int num, i;
    int T[5];
    
    printf("Enter a number you want converted to binary: ");
    scanf("%d", &num);
    dec2bin(T, num);
    for(i=0;i<5;i++)
        printf("%d", T[i]);
    //printf("Result = '%s'\n", T);
    
    system("PAUSE");
    return 0;
}
