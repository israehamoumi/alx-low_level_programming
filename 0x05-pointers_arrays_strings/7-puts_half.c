#include <string.h>
#include <stdio.h>
/**
 * puts_half - prints the second half of a string, followed by a new line
 *
 * @str: the string to print
 */
void puts_half(char *str);
int main(void)
{
char *str = "Lorem ipsum";
puts_half(str);
return 0;
}
void puts_half(char *str)
{
int len = strlen(str);
int i, start;
if (len % 2 == 0)
{
start = len / 2;
}
else
{
start = (len - 1) / 2;
}
for (i = start; i < len; i++)
{
putchar(str[i]);
}
putchar('\n');
}
