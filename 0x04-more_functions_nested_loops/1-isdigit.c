#include "main.h"
/**
 *_isdigit -main entry
 *@c: digit
 *Desc: digit or not
 *Return:0
 */
int _isdigit(int c)/*_isdigit: for betty*/
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}
