#include <stdio.h>
#include <stdlib.h>

/**
  * main - main block
  * Description: Use `putchar` function to print the alphabet in lowercase.
  * Return: 0
 */
int main(void)
{
	int ch = 'a';

	while (ch <= 'z')
	{
		putchar(ch);
		ch++;
	}
	putchar('\n');
	return (0);
}
