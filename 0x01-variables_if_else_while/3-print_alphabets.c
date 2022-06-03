#include <stdio.h>
#include <ctype.h>
/**
*main - return alphabets expect e and q
*Description: print the required results
*Return: integer value 0
*/
int main(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		putchar(c);
		c++;
	}

	c = 'A';

	while (c <= 'Z')
	{
		putchar(c);
		c++;
	}

	putchar('\n');
	return (0);
}
