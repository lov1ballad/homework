#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
// µœ÷printf
int my_printf(const char* format, ...)
{
	va_list arg;
	int done = 0;

	va_start(arg, format);

	while (*format != '\0')
	{
		if (*format == '%')
		{
			if (*(format + 1) == 'c')
			{
				char c = (char)va_arg(arg, int);
				putc(c, stdout);
			}
			else if (*(format + 1) == 'd' || *(format + 1) == 'i')
			{
				char store[20];
				int i = va_arg(arg, int);
				char* str = store;
				itoa(i, store, 10);
				while (*str != '\0') putc(*str++, stdout);
			}
			else if (*(format + 1) == 'o')
			{
				char store[20];
				int i = va_arg(arg, int);
				char* str = store;
				itoa(i, store, 8);
				while (*str != '\0') putc(*str++, stdout);
			}
			else if (*(format + 1) == 'x')
			{
				char store[20];
				int i = va_arg(arg, int);
				char* str = store;
				itoa(i, store, 16);
				while (*str != '\0') putc(*str++, stdout);
			}
			else if (*(format + 1) == 's')
			{
				char* str = va_arg(arg, char*);
				while (*str != '\0') putc(*str++, stdout);
			}

			// Skip this two characters.

			format += 2;
		}
		else {
			putc(*format++, stdout);
		}
	}

	va_end(arg);

	return done;
}