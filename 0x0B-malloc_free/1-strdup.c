#include "main.h"
#include <stdlib.h>
/**
 * _strdup - function returns a pointer to a new string
 * @str: contains a copy of the string given as duplicate
 * Return: return a pointer to the duplicated string
 * it return NULL if insufficient menory was available
 */
char *_strdup(char *str)
{
char *copy;
int i, len = 0;

if (str == NULL)
return (NULL);
while (str[len] != '\0')
len++;

copy = (char *)malloc((sizeof(char) * len) +1);
if (copy == NULL)
return (NULL);

for (i = 0; i < len; i++)
copy[i] = str[i];
copy[len] = '\0';
return (copy);
}
