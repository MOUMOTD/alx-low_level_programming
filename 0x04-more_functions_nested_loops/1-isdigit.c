#include "main.h"

/**
 * _isdigit - check if a char is digit
 * @x: the number to be checked
 * Return: 1for character that will be a digit or otherwise 0
 */

int _isdigit(int x)
{
	if (x >= 48 && x <= 57)
	{
		return (1);
	}
	return (0);
}
