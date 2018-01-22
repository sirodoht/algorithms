#include <stdio.h>

main()
{
    int a, b, y, p;

    printf("a, b:");
    scanf("%d", &a);
    scanf("%d", &b);
    p = 1;
    while(a > b*p)
        p = p + 1;
    p = p - 1;
    y = a - b*p;
    printf("p = %d, y = %d\n", p, y);
    system("PAUSE");
}
