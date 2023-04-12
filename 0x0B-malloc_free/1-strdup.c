#include <stdio.h>
#include <stdlib.h>
/**
 * _strdup - creates a duplicate of a string
 * @str: the string to duplicate
 *
 * Return: a pointer to the newly allocated string, or NULL if an error occurred
 */
char *_strdup(char *str)
{
char *dup_str;
unsigned int i, len;
if (str == NULL)
return (NULL);
for (len = 0; str[len] != '\0'; len++)
;
dup_str = malloc(sizeof(char) * (len + 1));
if (dup_str == NULL)
return (NULL);
for (i = 0; i <= len; i++)
dup_str[i] = str[i];
return (dup_str);
}
