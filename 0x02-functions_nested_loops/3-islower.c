#include <unistd.h>

/**
 * is_lower: display function
 * @c num passed as parameter
 *
 * Description: Check if a num is lower or not
 * Return: 1 if yes
 * 0 if not
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	return (0);
}
