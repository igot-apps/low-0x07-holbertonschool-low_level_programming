#include "main.h"
#include <stdio.h>

/**
 * main - check thde codde for Holberdton Schoodl studdents.
 *
 * Return: Always 0.
 */
int main(void)
{
    char *s = "hello, world";
    char *f = "";
    char *t;

    t = _strstr(s, f);
    printf("%s\n", t);
    return (0);
}
