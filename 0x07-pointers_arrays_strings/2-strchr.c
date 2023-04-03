#include <stdio.h>
/**
 * _strchr - locate character in string
 * @s: pointer to string to search
 * @c: character to locate
 *
 * Description: This function locates the first occurrence of the character c
 * in the string s. The terminating null byte is considered part of the string.
 *
 * Return: a pointer to the first occurrence of the character c in the string s,
 * or NULL if the character is not found
 */
char *_strchr(char *s, char c)
{
while (*s != '\0')
{
if (*s == c)
{
return (s);
}
s++;
}
if (*s == c)
{
return (s);
}
return (NULL);
}
