#include "main.h"
/**
 *set_string _ sets the value of the pointer to a char.
 *@s: pointer to pointer.
 *@to: pointe to char.
 *
 *Return: void.
 */
void set_string(char **s, char *to)
{
	*s = to;
}
