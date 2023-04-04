#include <stdio.h>
/**
 * _strstr - locates a substring.
 * @haystack: the string to search through
 * @needle: the substring to find
 *
 * Return: a pointer to the beginning of the located substring,
 * or NULL if the substring is not found
 */
char *_strstr(char *haystack, char *needle)
{
char *start;
char *p1;
char *p2;
for (start = haystack; *start != '\0'; start++)
{
p1 = start;
p2 = needle;
while (*p1 != '\0' && *p2 != '\0' && *p1 == *p2)
{
p1++;
p2++;
}
if (*p2 == '\0')
return (start);
}
return (NULL);
}
