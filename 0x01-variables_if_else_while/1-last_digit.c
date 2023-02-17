#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
    srand(time(0)); // seed the random number generator with the current time
    int n = rand(); // generate a random number
    char str[20];
    sprintf(str, "%d", n);
    int last_digit = abs(n) % 10;
    printf("Last digit of %d is ", n);
    if (last_digit > 5) {
        printf("%d and is greater than 5\n", last_digit);
    } else if (last_digit == 0) {
        printf("0 and is 0\n");
    } else {
        printf("%d and is less than 6 and not 0\n", last_digit);
    }
    return 0;
}

