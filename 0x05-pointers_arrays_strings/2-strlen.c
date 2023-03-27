#include <stdio.h>
/**
 * _strlen - Returns the length of a string.
 *
 * @s: A pointer to a char.
 *
 * Return: An int, the length of the string.
 */
int _strlen(char *s)
{
int i = 0;
while (s[i] != '\0')
{
i++;
}
return (i);
}
