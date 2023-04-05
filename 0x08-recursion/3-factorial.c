#include <stdio.h>
/**
 * factorial - calculates the factorial of a given number
 * @n: the number to calculate the factorial of
 *
 * Return: the factorial of n, or -1 if n is negative
 */
int factorial(int n)
{
/* Check for negative input */
if (n < 0)
{
/* Return -1 to indicate error */
return (-1);
}
/* Base case: 0! = 1 */
else if (n == 0)
{
return (1);
}
/* Recursive case: n! = n * (n-1)! */
else
{
return (n * factorial(n - 1));
}
}
