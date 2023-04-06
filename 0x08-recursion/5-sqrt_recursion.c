#include <stdio.h>
/**
 * _sqrt_recursion - returns the 
 * natural square root of a number
 * @n: the number to find the square root of
 * @guess: the current guess for the square root
 * Return: the natural square root of n, 
 * or -1 if n does not have a natural square root
 */
int sqrt_helper(int n, int guess);
int _sqrt_recursion(int n)
{
if (n <= 0)
return (-1);
return (sqrt_helper(n, 1));
}
/**
 * sqrt_helper - helper function for _sqrt_recursion
 * @n: the number to find the square root of
 * @guess: the current guess for the square root
 * Return: the natural square root of n, or -1 if n 
 * does not have a natural square root
 */
int sqrt_helper(int n, int guess)
{
if (guess * guess == n)
return (guess);
if (guess * guess > n)
return (-1);
return (sqrt_helper(n, guess + 1));
}
