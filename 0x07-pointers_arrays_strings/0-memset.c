#include <string.h>
/**
 * _memset function that fills memory with a byte - constant byte
 * s - first value
 * b - second valiue 
 * n - nth value or blah blah value
 *
 * Return: character with result of memset
 */
char *memset(char *s,char b, unsigned int n)
{
	unsigned int i;
	for (i=0;i<10;i++)
	{
		s[i]=b;
	}
	return(s);
}
