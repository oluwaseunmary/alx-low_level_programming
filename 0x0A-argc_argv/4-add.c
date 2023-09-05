#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * main - add all positive numbers
 * @argc: argument count
 * @argv: argument vector
 * Return: (0)
 */
int main(int argc, char *argv[])
{
	 int 1, j,  add = 0;

	 for (i = 1; i < argc; i++)
	 {

		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (!isdigit(argc[i][j]))
			{
				printf("Error\n");
				return (1);
			}
		}
		add += atoi(argv[i]);
	}
	 printf("%d\n', add);
	 return (0);
}
