#include "shell.h"

/**
 * bfree - free a pointer and Nulls the address
 * @ptr: address of the pointer to be freed
 * Return: 1 if freed and nil if not
 */

int bfree(void **ptr)
{
	if (ptr && *ptr)
	{
		free(*ptr);
		*ptr = NULL;
		return (1);
	}
	return (0);
}
