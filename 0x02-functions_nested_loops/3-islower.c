#include "main.h"

/**
 * _islower - checks if the char is in lowercase
 * @c: is the chat to be checked
 * Return: 1 if the char is lowercase, otherwise 0.
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
