#include "main.h"

/**
 * _islower - checks if char is lower case
 * @c: is the char to be checked
 * Return: fchar is lowercase,otherwise 0.
*/

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
