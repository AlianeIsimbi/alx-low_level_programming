#include <stdbool.h>
#include <string.h>

int is_palindrome(char *s)
{
	if (strlen(s) <= 1)
	{
		return (1);
	}
	if (s[0] == s[strlen(s) - 1])
	{
		return is_palindrome(s + 1, strlen(s) - 2);
	}
	return (0);
}
