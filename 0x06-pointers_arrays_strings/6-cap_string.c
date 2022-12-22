#include "main.h"

/**
 * cap_string - capitalises all words of a string
 * @str: string
 * Return: pointer to string
 */
char *cap_string(char *str)
{
	int i = 0;
	while (str[i])
	{
		while (!(str[i]
