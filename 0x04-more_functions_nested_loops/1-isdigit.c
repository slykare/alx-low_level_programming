#include "main.h"

/**
 *  _isdigit - it verifies a digit or not
 *  @c: tested character
 *  Return: return 1 if it is a digit and 0 if its not
 */
int _isdigit(int c)
{
if ((c >= 48) && (c <= 57))
return (1);

return (0);
}
