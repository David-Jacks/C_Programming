#include "main.h"

int conv_spec(const char *format, int count, va_list args)
{
	switch (*format)
	{
		case 'c':
			char ans = va_arg(args, int);

			write(1, &ans, 1);
			count++;
			break;
		case 's':
			char *pans = va_arg(args, char *);

			if (pans != NULL)
			{
				while (*pans)
				{
					write(1, pans, sizeof(*pans));
					count++;
					pans++;
				}
			} else
			{
				write(1, "(null)", 6);
				count += 6;
			}
			break;
		case '%':
			write(1, format, 1);
			count++;
			break;
		default:
			write(1, format, 1);
			break;
	}
	return (count);
}
