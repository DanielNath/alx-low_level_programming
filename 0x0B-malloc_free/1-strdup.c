#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * _strdup - duplicate to new memory space location
 * @str: char
 * Return: 0
 */
char *_strdup(char *str)
{
	char *chstr;
	int count, r = 0;

	if (str == NULL)
		return (NULL);
	count = 0;
	while (str[count] != '\0') /* count lenght of string */
		count++;

	chstr = malloc(sizeof(char) * (count + 1)); /* adding (\0) to count string */

	if (chstr == NULL) /* test if malloc is NULL */
		return (NULL);

	for (r = 0; str[r]; r++) /* coping string to malloc memory */
		chstr[r] = str[r];

	return (chstr);
}

