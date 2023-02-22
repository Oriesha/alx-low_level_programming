#include "main.h"


/**
 * _islower - Checks for lowercase character
 * @c: The character to be checked
 * Return: 1 for lowrcase character or 0 for anthing else
 */

int _isalpha(int c)

{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
	{
	return (1);
	}
        return (0);
}
