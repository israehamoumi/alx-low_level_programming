#include <stdio.h>
/**
 * _puts_recursion - prints a string followed by a newline, recursively
 *
 * @s: a pointer to the string to be printed
 *
 * Return: void
 */
void _puts_recursion(char *s)
{
/* Base case: If s points to the null character, print a newline. */
if (*s == '\0')
{
_putchar('\n');
return;
}
/* Recursive case: Print the current character and recursively call the
 * function with the next character in the string. */
_putchar(*s);
_puts_recursion(s + 1);
}
