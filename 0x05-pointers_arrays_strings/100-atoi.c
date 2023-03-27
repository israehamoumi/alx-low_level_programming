#include <stdio.h>
/**
 * _atoi - converts a string to an integer.
 * @s: string to convert
 * Return: integer value of string
 */
int _atoi(char *s)
{
int sign = 1, num = 0, started = 0;
char *p = s;
while (*p) {
if (*p == '-' && !started) {
sign *= -1;
}
else if (*p == '+' && !started) {
sign *= 1;
}
else if (*p >= '0' && *p <= '9') {
num = num * 10 + (*p - '0');
started = 1;
}
else if (started) {
break;
}
p++;
}
return num * sign;
}
