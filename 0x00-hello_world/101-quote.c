#include <string.h>
/**
 * main - Entry point
 *
 * Return: Always (1) (Error)
 */
int main(void)
{
char *quote = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
int len = 0;
while (quote[len])
len++;
write(2, quote, len);
return (1);
}
