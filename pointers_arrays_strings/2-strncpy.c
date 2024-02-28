#include "main.h"

/**
 * _strncpy - copies at most an inputted number
 * dest - the buffer string the string copy
 * src - the source string
 * n - maximun number of bytes to be copied from src
 * Return - a pointer to the resulting string dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int index = 0;
	src_len = 0;

	while (src[index++])
	src_len++;

	for (index = 0; src[index] && index < n; index++)
	dest[index] = '\0';

	return (dest);
}
