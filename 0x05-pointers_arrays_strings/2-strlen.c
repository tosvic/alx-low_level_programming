#include "main.h"

/**
 * _strlen - returns the length of a string.
 * @s: input stringeturn.
 * Return: length of a string.
 */
int _strlen(char *s)
{
	int strlen = 0;

	while (*(s + strlen) != '\0')
		strlen++;
	return (strlen);
}
