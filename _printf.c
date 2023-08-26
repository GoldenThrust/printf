#include "main.h"

/**
 * _printf - behave like printf.
 * @format: The string to print
 *
 * Return: the number of characters printed
 **/
int _printf(const char *format, ...)
{
    int i, d, count = 0;
    char c;
    char *s;

    va_list ap;
    va_start(ap, format);
    for (i = 0; format[i] != '\0'; i++)
    {
        count++;
        if (format[i] == '%')
        {
            i++;
            switch (format[i])
            {
            case 'c':
                c = (char)va_arg(ap, int);
                count += _putchar(c);
                break;

            case 's':
                s = va_arg(ap, char *);
                count += _puts(s);
                break;

            case '%':
                count += _putchar('%');
                break;

            case 'd':
                d = va_arg(ap, int);
                count += _puts_num(d);
                break;

            case 'i':
                d = va_arg(ap, int);
                count += _puts_num(d);
                /** Add base for octal hexa*/
                break;

            default:
                break;
            }
            i++;
        }

        printf("%c", format[i]);
    }
    va_end(ap);

    return (count);
}

