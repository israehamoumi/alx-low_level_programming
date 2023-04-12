#include <stdlib.h>
#include <string.h>
#include <stdio.h>
/**
 * count_words - Counts the number of words in a string.
 * @str: The string to count the words in.
 *
 * Return: The number of words in the string.
 */
int count_words(char *str)
{
int i, words = 0, len = strlen(str);
for (i = 0; i < len; i++)
{
if (str[i] != ' ' && (i == 0 || str[i - 1] == ' '))
words++;
}
return (words);
}
/**
 * strtow - Splits a string into words.
 * @str: The string to split.
 *
 * Return: A pointer to an array of strings (words), or NULL if str == NULL or
 *         str == "" or if memory allocation fails.
 */
char **strtow(char *str)
{
int i, j, k, len, words;
char **word_array;
if (str == NULL || *str == '\0')
return (NULL);
words = count_words(str);
word_array = malloc(sizeof(char *) * (words + 1));
if (word_array == NULL)
return (NULL);
for (i = 0, j = 0; i < words; i++)
{
while (str[j] == ' ')
j++;
len = 0;
while (str[j + len] != ' ' && str[j + len] != '\0')
len++;
word_array[i] = malloc(sizeof(char) * (len + 1));
if (word_array[i] == NULL)
{
for (k = 0; k < i; k++)
free(word_array[k]);
free(word_array);
return (NULL);
}
for (k = 0; k < len; k++)
word_array[i][k] = str[j + k];
word_array[i][k] = '\0';
j += len;
}
word_array[i] = NULL;
return (word_array);
}
