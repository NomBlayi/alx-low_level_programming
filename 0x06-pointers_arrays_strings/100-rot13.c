#include "main.h"
#include <stdio.h>

/**
 * rot13 - A function that encodes a string using rot13
 * @n: pointer
 * Return: *n
 */

char *rot13(char *n)
{
	int a;
	int b;
	char data[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char data1[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (a = 0; n[a] != '\0'; a++)
	{
	for (b = 0; b < 52; b++)
	{
	if (n[a] == data[b])
	{
	n[a] = data1[b];
	break;
	}
	}
	}
	return (n);
}
