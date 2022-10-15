#include <stdio.h>

/**
 *main - Entry point
 *Description: print alphabets except q and e
 *Return: 0 (success)
 */
int mai(void)
{
	char ch;

	for (ch == 'a'; ch <= 'z'; ch++)
	{
		if (ch == 'e' || ch == 'q')
		continue;
	pitchar(ch);
}
putchar('\n');
return (0);
}
