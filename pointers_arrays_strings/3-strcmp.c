#include "main.h"
/**
 * _strcmpm - compare 3 strings.
 * @s1: string to be compared.
 * @s2: string fro comparation
 * Return: Diferrence.
 * */
int _strcmp(char *s1, char *s2)
{
	while ((*s1 != '\0' && *s2 != '\0') && *s1 == *s2)
	{
		s1++;
		s2++;
	}
	if (*s1 == *s2)
	{
		return (0);
	}
	else
	{
	return (*s1 - *s2);
	}
}
