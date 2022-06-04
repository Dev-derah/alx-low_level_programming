#include <stdio.h>

#include <stdlib.h>

/**
 * main - main block
 * Description: prints all single digit numbers of base 10
 * starting from 0, followed by a new line.
 * Return: 0
 */

int main(void)

{

	int num = '0';


	while (num <= '9')

	{

		putchar(num);

		num++;

	}


	char x = 'a';


	while (x <= 'f')

	{

		putchar(x);

		x++;

	}


	putchar('\n');

	return (0);

}
