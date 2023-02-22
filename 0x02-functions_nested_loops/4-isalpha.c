#include "main.h"
/**
 * _isalpha -entry point
 * desc:lower or upper
 *Return:0
 */
int _isalpha(int c)/*_isalpha:for betty*/
{
	if ((c = 'a' && c <= 'z') ||
		(c = 'A' && c <= 'Z'))
			return (1);
	else
		return (0);
	return (0);
}
