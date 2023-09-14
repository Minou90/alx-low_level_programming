#include "main.h"

/**
 * _isupper - check if a letter is upper 
 * @c: the number to be checked
 * Return: 1 if upper letter or 0 for any else
 */
int _isupper(int c)
{
	if (c > 64 && c < 91)
		return (1);

	return (0);
}
