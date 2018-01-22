#include <stdio.h>
#include <stdlib.h>

int digit(int num, int dig)
{
    int res, size=0, num_clone, dig_clone;

    num_clone=num;
    while(num_clone)
    {
        size++;
        num_clone/=10;
    }

    dig_clone=size-dig+1;

    while(dig_clone)
    {
        res=num;
        num/=10;
        dig_clone--;
    }
    res=res%10;
    printf("%dth dig: %d || size=%d\n", dig, res, size);
}

int main(void)
{
    digit(3654987, 3);
    
	system("PAUSE");
	return 0;
}
