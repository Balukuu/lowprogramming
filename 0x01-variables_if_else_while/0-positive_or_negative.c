#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    srand(time(0)); // seed the random number generator with the current time
    int n = rand() % 201 - 100; // generate a random number between -100 and 100
    printf("%d\n", n);
    if (n > 0) {
        printf("is positive\n");
    } else if (n == 0) {
        printf("is zero\n");
    } else {
        printf("is negative\n");
    }
    printf("\n");
    return 0;
}

