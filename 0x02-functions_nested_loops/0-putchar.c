#include "main.h"

/**
 * main - entry point
 *
 * Description: Prints __putchar
 *
 * Return: always 0
 */

int main(void)
{
	int i = 0;
	char c;
	char s[] = "_putchar";

	while (i <= 7)
	{
		c = s[i];
		_putchar(c);
		i++;
	}
	_putchar('\n');
	return (0);
}
