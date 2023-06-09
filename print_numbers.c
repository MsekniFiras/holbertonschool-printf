#include "main.h"

/**
 * print_decimal - prints a decimal.
 *
 * @valley: arg
 *
 * Return: count.
 */
int print_decimal(va_list valley)
{
	unsigned int name, dec, number, account;
	int d;

	account = 0;
	d = va_arg(valley, int);
	if (d < 0)
	{
		name = (d * -1);
		account += _putchar('-');
	}
	else
		name = d;

	dec = name;
	number = 1;
	while (dec > 9)
	{
		dec /= 10;
		number *= 10;
	}
	while (number >= 1)
	{
		account += _putchar(((name / number) % 10) + '0');
		number /= 10;
	}
	return (account);
}

/**
 * print_integer - prints integer
 * @valley: args
 * Return: i
 */

int print_integer(va_list valley)
{
	return (print_decimal(valley));
}
