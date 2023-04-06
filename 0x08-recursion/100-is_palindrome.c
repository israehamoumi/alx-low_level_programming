#include <stdio.h>
/**
 * is_palindrome - checks if a string is a palindrome
 * @s: the string to check
 *
 * Return: 1 if the string is a palindrome, 0 otherwise
 */
int is_palindrome(char *s)
{
int len = 0, i;
if (s == NULL)
return (0);
/* find length of string */
while (s[len] != '\0')
len++;
/* iterate over the first half of string */
for (i = 0; i < len / 2; i++)
{
/* compare ith and (len-i-1)th characters */
if (s[i] != s[len - i - 1])
return (0);
}
return (1);
}
