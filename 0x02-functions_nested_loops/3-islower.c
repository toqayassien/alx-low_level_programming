#include "main.h"
/**
 *_islower -entry point
 *desc: lower case
 *Return:0
 *parameter c: letter
 */
int _islower(int c)/*_islower: for betty*/
{

	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
	return (0);
}