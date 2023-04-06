#include <stdio.h>
/**
 * _puts_recursion - prints a string, followed by a new line.
 * @s: pointer to the string to be printed.
 *
 * Return: void.
 */
void _puts_recursion(char *s)
{
if (*s == '\0')
{
printf("\n"); /* prints new line when string is empty */
return;
}
printf("%c", *s); /* prints the first character */
_puts_recursion(s + 1); /* recursively calls function with next character */
}
