#include "main.h"
#include <unistd.h>
/**
 * _putchar.c - writes the character c to stdout
 * @c The character to print
 *
 * Return On success 1.
 * on error, -1 is returned, and error is set approximately.
 */
int_putchar(char c)
{
   return(write(1, &c 1));
}
