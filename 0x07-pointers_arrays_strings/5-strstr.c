#include "main.h"
#include <stdio.h>
/**
 * _strstr - locates a substring
 * @haystack: the string to search in
 * @needle: the substring to search for
 *
 * Return: pointer to the beginning of the located substring, or NULL if not found
 */
char *_strstr(char *haystack, char *needle)
{
char *h, *n;
do
{
h = haystack;
n = needle;
while (*h != '\0' && *n != '\0' && *h == *n)
{
h++;
n++;
}
if (*n == '\0')
return haystack;
haystack++;
}
while (*haystack != '\0');
return NULL;
}
