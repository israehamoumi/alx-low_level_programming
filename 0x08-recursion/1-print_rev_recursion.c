#include <stdio.h>
/**
 * _print_rev_recursion - prints a string in reverse.
 * @s: pointer to the string to be printed in reverse.
 *
 * Return: void.
 */
void _print_rev_recursion(char *s)
{
if (*s == '\0') /* base case: reached end of string */
return;
_print_rev_recursion(s + 1); /* recursively calls function with next character */
printf("%c", *s); /* prints the character after all recursive calls have been made */
}
