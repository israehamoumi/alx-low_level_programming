#include <stdio.h>
/**
 * _pow_recursion - calculates the value of x raised to the power of y
 * @x: the base number
 * @y: the exponent
 *
 * Return: the result of x raised to the power of y, or -1 if y is negative
 */
int _pow_recursion(int x, int y)
{
/* Base case: any number raised to 0 is 1 */
if (y == 0)
{
return (1);
}
/* If y is negative, return -1 to indicate error */
else if (y < 0)
{
return (-1);
}
/* Recursive case: x^y = x * x^(y-1) */
else
{
return (x * _pow_recursion(x, y - 1));
}
}
