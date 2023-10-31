#include "main.h"
#include <string.h>

/**
 * *argstostr - concatenates all the arguments of your program.
 *
 * @ac: int
 * @av: arg
 *
 * Return: string
 */

char *argstostr(int ac, char **av)
{
	int i, j, nc = 0, cmpt = 0;
	char *s;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++, nc++)
		nc += strlen(av[i]);

	s = malloc(sizeof(char) * nc + 1);

	if (s == 0)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++, cmpt++)
			s[cmpt] = av[i][j];

		s[cmpt] = '\n';
		cmpt++;
	}
	s[cmpt] = '\0';
	return (s);
}
