#include <stdlib.h>
#include "main.h"
/**
 *This allocates memory using malloc
 * @b:This is the number of bytes to allocates
 *
 * Return: a pointer to the allocated memory.
 * if malloc fails,The status value is equal to 98.
 */
void *malloc_checked(unsigned int b)
{
	char *p;

	p = malloc(b);
	if (p == NULL)
		exit(98);
	return (p);
}
