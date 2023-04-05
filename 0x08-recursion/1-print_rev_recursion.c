#include <stdio.h>
/**
 * _print_rev_recursion - Prints a string in reverse, recursively.
 *
 * @s: A pointer to the string to be printed in reverse.
 *
 * Return: void.
 */
void _print_rev_recursion(char *s)
{
/* Base case: If s points to the null character, return. */
if (*s == '\0')
{
return;
}
/* Recursive case: Call the function with the next character in the string,
 * then print the current character. */
_print_rev_recursion(s + 1);
_putchar(*s);
}
