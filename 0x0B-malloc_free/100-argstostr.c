#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * argstostr - concatenates all the arguments of the program
 * @ac: the number of arguments
 * @av: the array of arguments
 *
 * Return: a pointer to the new string, or NULL on failure
 */
char *argstostr(int ac, char **av)
{
int i, j, len = 0, total_len = 0;
char *str;
if (ac == 0 || av == NULL)
return (NULL);
/* Compute the total length of the arguments */
for (i = 0; i < ac; i++)
{
len = strlen(av[i]);
total_len += len + 1; /* Add 1 for the newline character */
}
/* Allocate memory for the concatenated string */
str = malloc(total_len * sizeof(char) + 1);
if (str == NULL)
return (NULL);
/* Copy the arguments to the new string, with newlines */
for (i = 0, j = 0; i < ac; i++)
{
len = strlen(av[i]);
strncpy(str + j, av[i], len);
j += len;
*(str + j) = '\n'; /* Add the newline character */
j++;
}
*(str + j) = '\0'; /* Add the null terminator */
return (str);
}
