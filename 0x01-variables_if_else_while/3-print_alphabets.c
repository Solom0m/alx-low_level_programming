#include <stdio.h>
/**
 * main - Print the alphabet in lowercase and then in uppercase
 *
 * Return: Always 0
 */

int main(void){
	char letter;

	while (letter <= 'z')
	{
		putchar(letter);
		letter++;
	}

	while (letter <= 'Z')
	
	{
		putchar(letter);
		letter++;
	}

	putchar('\n');

	return (0);

}
