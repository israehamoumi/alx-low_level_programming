#include <unistd.h>
/**
 * putchar_repeatedly - puts a char repeatedly
 * @c: the character to put
 * @count: number of times to put the character
 */
void putchar_repeatedly(char c, int count)
{
int i;
for (i = 0; i < count; i++)
putchar(c);
}
/**
 * print_combinations - prints all combinations of three digits
 */
void print_combinations(void)
{
int i, j, k;
for (i = 0; i <= 7; i++)
{
for (j = i + 1; j <= 8; j++)
{
for (k = j + 1; k <= 9; k++)
{
putchar(i + '0');
putchar(j + '0');
putchar(k + '0');
if (i != 7 || j != 8 || k != 9)
{
putchar(',');
putchar(' ');
}
}
}
}
putchar('\n');
}
/**
 * main - entry point
 * Return: always 0
 */
int main(void)
{
print_combinations();
return (0);
}
