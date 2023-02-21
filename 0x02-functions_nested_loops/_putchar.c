#include <unistd.h>


/**
 * _putchar - write the character c to stdout
 * @C: The character to print
 * Return: On success 1.
 * On error, -1 is return, and errno is set appropriately.
 */

int _putchar(char c)

{
	return (write(1, &c, 1));

}
