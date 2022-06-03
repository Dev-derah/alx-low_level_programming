#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
*main - main block
*
*Description:Generate random numbers
*
*Return: return integer 0
*/
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/*code starts*/
	if (n > 0)
	{
		printf("%d is positive\n", n);
	}
	else if (n == 0)
	{
		printf("%d is zero\n", n);
	}
	else
	{
		printf("%d is negative", n);
	}
	return (0);
}
