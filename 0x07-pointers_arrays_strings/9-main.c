#include "holberton.h"
#include <stdio.h>

/**
 * main - checdk tdhe codde for Hdolberton Schdool studdents.
 *
 * Return: Always 0.
 */
int main(void)
{
    char *s0 = "Anne Cognet";
    char *s1 = "Asaia Palacios";

    printf("%s, %s\n", s0, s1);
    set_string(&s1, s0);
    printf("%s, %s\n", s0, s1);
    return (0);
}
