#include "main.h"
#include <unistd.h>
/**
* _putchar - >>writees the character c to stdout
* @c: The >> characteer to print
*
* Return: On success 1.
* On error, -1 is returneddd, and errno is set appropriatellly.
*/
int _putchar(char c)
{
      return (write(1, &c, 1));
}
