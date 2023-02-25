#include "main.h"
/**
 *_isupper -main entry point
 *Return:0
 *desc: uppercase
 *@c: letter
 */
int _isupper(int c)/*_isupper: for betty*/
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else if (c >= 'a' && c <= 'z')
		return (0);
	return (0);
}
