#include <stdio.h>
#include <stdlib.h>
/**
 * create_array - creates an array of
 * characters of a given size and initializes
 * all elements of the array with a given character
 * @size: the size of the array to create
 * @c: the character to initialize the array with
 * Return: a pointer to the newly created
 * array, or NULL if an error occurred
*/
char *create_array(unsigned int size, char c)
{
char *arr;
unsigned int i;
if (size == 0)
return (NULL);
arr = malloc(size * sizeof(char));
if (arr == NULL)
return (NULL);
for (i = 0; i < size; i++)
arr[i] = c;
return (arr);
}
