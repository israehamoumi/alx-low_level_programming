#include <stdio.h>
/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
char *str1 = "Hello";
char *str2 = "World";
printf("%s, %s\n", str1, str2);
set_string(&str2, str1);
printf("%s, %s\n", str1, str2);
return (0);
}
