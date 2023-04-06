#include <stdio.h>
/**
 * _strlen_recursion - Returns the length of a string.
 *
 * @s: A pointer to the string whose length is to be computed.
 *
 * Return: The length of the string.
 */
int _strlen_recursion(char *s)
{
/* Base case: If s points to the null character, return 0.
 */
if (*s == '\0')
{
return (0);
}
/* Recursive case: Return 1 plus the length of the string starting from the
 * next character.
 */
return (1 + _strlen_recursion(s + 1));
}
