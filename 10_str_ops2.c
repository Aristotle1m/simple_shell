#include "shell.h"
#include <stdio.h>

/**
 * _reverse - reverses the content of a string
 * @str: string to reverse
 * @n: lengeth of string
 * Return: reversed string
 */

char *_reverse(char *str, int n)
{
	char *start = str;
	char *end;
	char temp;

	end = str + n - 1;
	for (; start < end; start++, end--)
	{
		temp = *end;
		*end = *start;
		*begin = temp;
	}
	return (str);
}

/**
 * _itoa - converts an integer base 10 to a string
 * @num: integer to convert
 * Return: integer in string format
 */

char *_itoa(int num)
{
	int x = 0, neg = 0, c_num = num, len, rem = 0;
	char *str;

	for (len = 0; c_num; c_num /= 10)
		;

	/* check if num is 0 */
	if (num == 0)
	{
		str = do_mem(2 * sizeof(char), NULL);
		str[x++] = '0';
		str[x] = '\0';
		return (str);
	}
	/* check if negative number */
	if (num < 0)
	{
		neg = 1;
		num = -num;
		len++;
	}
	/* malloc for size of string */
	str = do_mem((len + 1) * sizeof(char), NULL);
	/* handle individual numbers */
	while (num != 0)
	{
		rem = num % 10;
		str[x++] = rem + '0';
		num = num / 10;
	}
	/* Add negative sign if negatice */
	if (neg)
		str[x++] = '-';
	/* add null bite */
	str[x] = '\0';
	/* reverse string */
	_reverse(str, x);

	return (str);
}

/**
 * _memset - memset function
 * @s: start point of string to change
 * @b: value that will replace
 * @n: number of bytes to change
 * Return: changed pointer
 */

char *_memset(char *s, char b, int n)
{
	char *x = s;

	for (; n != 0; x++, n--)
		*x = b;
	return (s);
}
