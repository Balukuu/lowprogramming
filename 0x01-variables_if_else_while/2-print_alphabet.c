#include <stdio.h>
#include <unistd.h>
/**
 * main - Entry point
 * Description: prints the alphabet in lowercase\n
 * Return: Always 0 (success)
 */
int main(void)
{
    int i;
    for (i = 97; i <= 122; i++)
    {
        putchar(i);
    }
    putchar('\n');
    return (0);
}
