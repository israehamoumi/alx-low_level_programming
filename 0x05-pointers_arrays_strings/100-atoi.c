#include <stdio.h>
/**
 * _atoi - converts a string to an integer
 * @s: the input string
 *
 * Return: the integer value of the string, or 0 if no integer is found
 */
int _atoi(char *s)
{
int sign = 1;
int result = 0;
int digit;
while (*s) {
if (*s == '-') {
sign *= -1;
}
else if (*s >= '0' && *s <= '9') {
digit = *s - '0';
result = result * 10 + digit;
}
else if (result > 0) {
/* stop parsing once we've found an integer */
break;
}
s++;
}
return (result * sign);
}
