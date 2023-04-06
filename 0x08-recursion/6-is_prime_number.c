#include<stdio.h>
/**
 * is_prime_number - checks if the input integer is prime or not
 * @n: the number to be checked
 * Return: 1 if the number is prime, otherwise 0
 */
int is_divisible(int n, int div);
int is_prime_number(int n)
{
if (n <= 1)
return (0);
return (is_divisible(n, n - 1));
}
/**
 * is_divisible - checks if n is divisible by div
 * @n: the number to be checked
 * @div: the number to check if it is a divisor of n
 * Return: 1 if n is divisible by div, otherwise 0
 */
int is_divisible(int n, int div)
{
if (div == 1)
return (1);
if (n % div == 0)
return (0);
return (is_divisible(n, div - 1));
}
