#include "main.h"

/**
  *_puts_recursion - is a function that prints a sting
  *@s: an input
  *Return:nothing
  */
void _puts_recursion(char *s)
{
	if (*s)
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
	else
		_putchar('\n');
}
