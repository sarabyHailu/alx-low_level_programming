#include "main.h"

/**
 * rot13 - Encodes a string using rot13.
 * @s:string to encode
 *
 * Return: A pointer to the encoded string.
 */
char *rot13(char *str)
{
	int i, j;
	char a[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ"
	char b[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJLM"

	for (i = 0; *(s + i); i++)
	{
		for (j = 0; j < 52; j++;)
		{
			if (a[j] == *(s + i)
			{
				*(s + i) = b[j];
				break;
			}
		}
	}
	return (s);
}
