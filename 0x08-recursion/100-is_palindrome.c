/**
 * _strlen - calculates the length of a string
 * @s: the string to calculate the length of
 *
 * Return: the length of the string
 */
int _strlen(char *s)
{
if (*s == '\0')
return (0);
else
return (_strlen(s + 1) + 1);
}
/**
 * is_palindrome_helper - recursive helper function for is_palindrome
 * @s: the string to check
 * @start: the start index
 * @end: the end index
 *
 * Return: 1 if the string is a palindrome, 0 otherwise
 */
int is_palindrome_helper(char *s, int start, int end)
{
/* base case: start index has crossed end index */
if (start >= end)
return (1);
/* if start and end characters don't match, not a palindrome */
if (s[start] != s[end])
return (0);
/* recurse with updated start and end indices */
return (is_palindrome_helper(s, start + 1, end - 1));
}
/**
 * is_palindrome - checks if a string is a palindrome
 * @s: the string to check
 *
 * Return: 1 if the string is a palindrome, 0 otherwise
 */
int is_palindrome(char *s)
{
int len;
if (s == NULL)
return (0);
len = _strlen(s);
return (is_palindrome_helper(s, 0, len - 1));
}
