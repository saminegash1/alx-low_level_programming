#include "main.h"
#include <string.h>

/**
* _strcat -> this is a funcion strcat
* @dest: first param
* @src: second param
* Return: a string
*/
char *_strcat(char *dest, char *src)
{
	strcat(dest, src);
	return (dest);
}
