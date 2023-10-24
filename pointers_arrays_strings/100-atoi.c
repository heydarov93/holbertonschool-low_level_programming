#include "main.h"

/**
 * _atoi - converts a string to an integer
 *
 * @s: pointer to the string
 *
 * Return: nothing
 */

int _atoi(char *s)
{
	unsigned int sum = 0;
	int i = 0;
	char sign = '+';


	for (i = 0; s[i]; i++)
	{

		if (s[i] == 43 || s[i] == 45 || (s[i] >= 48 && s[i] <= 57))
		{
			if (s[i] < 48)
			{
				if (s[i] == sign)
					sign = '+';
				else
					sign = '-';
			}
			else
			{
				sum = sum * 10 + (s[i] - 48);
				if (s[i + 1] < 48 || s[i + 1] > 57)
				{
					if (sign == '-')
						return (-sum);
					return (sum);
				}
			}
		}
	}

	return (0);
}

