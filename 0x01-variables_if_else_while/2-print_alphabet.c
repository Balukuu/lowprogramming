#include <stdio.h>
#include <unistd.h>
/**
 * main is the Entry poin for the code
 *what the code does: prints the alphabet in lowercase\n
 * Return: Always 0 
 */
int main(void)
{
    int i;
    for (i = 97; i <= 122; i++) {
        putchar(i);
    }
    putchar('\n');
    return 0;
}
