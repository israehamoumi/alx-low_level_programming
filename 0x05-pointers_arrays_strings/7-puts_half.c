#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * puts_half - Prints the second half of a string
 * @str: The string to print
 */
void puts_half(char *str)
{
int len = strlen(str);
int i, j;
if (len % 2 == 0) {
i = len / 2;
j = len;
} else {
i = (len - 1) / 2;
j = len - 1;
}
for (; i < j; i++) {
putchar(str[i]);
}
putchar('\n');
}
