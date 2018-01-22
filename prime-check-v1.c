#include <stdio.h>

main()
{
    int num;
    scanf("%d", &num);
    int ans = 1;
    printf("ans:%d | num:%d\n", ans, num);
    int j = 2;
    printf("j:%d\n", j);
    while(num % j != 0)
    {
        j = j + 1;
        printf("j:%d\n", j);
    }
    if((2 <= j) && (j < num))
    {
        ans = 0;
        printf("ans:%d | j:%d | num:%d\n", ans, j, num);
    }
    printf("ans:%d\n", ans);
    system("PAUSE");
}
