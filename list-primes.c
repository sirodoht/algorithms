#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    if (argc != 2) {
       printf("Usage: list-primes [limit]\n");
       exit(1);
    }

    char* p;
    long limit = strtol(argv[1], &p, 10);
    if (*p != '\0') {
       printf("Invalid limit. Non-digit number occured.");
       exit(1);
    }

    int k, ans, j, i;
    
    k = 0;
    for (i = 2; i <= limit; i++) {
        ans = 1;
        j = 2;
        while (i % j != 0)
            j++;
        if ((j >= 2) && (j < i))
            ans = 0;
        if (ans == 1) {
            k++;
            printf("%d\n", i);
        }
    }
    printf("Number of primes: %d\n", k);
    return 0;
}
