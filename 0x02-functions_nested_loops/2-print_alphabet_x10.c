#include "main.h"

/**
* print_alphabet - Prints the alphabet in lowercase.
*
* Return: 0
*/

void print_alphabet(void)

{

	int i;
	int n = 1;

	while (n <= 10)
	{


		for (i = 97; i <= 122; i++)

		{

			_putchar(i);

		}
	}
	_putchar('\n');

}
