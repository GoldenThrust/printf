#include "main.h"

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is return, errno is set appropriately.
 **/
int _putchar(char c)
{
    fflush(stdout);
    return (write(1, &c, 1));
}

/**
 * _puts - writes the string c to stdout
 * @c: The string to print
 *
 * Return: the number of characters printed
 **/
int _puts(char *c)
{
    int i = 0;

    while (c[i])
    {
        _putchar(c[i]);
        i++;
    }

    return (i);
}

/**
 * _puts_num - writes the int c to stdout as string
 * @num: The string to print
 *
 * Return: the number of characters printed
 **/
int _puts_num(int num)
{
    int length = 0, i = 0, count = 0;
    char buffer[20];

    if (num == 0)
    {
        _putchar('0');
        return (1);
    }
    else if (num < 0)
    {
        _putchar('-');
        num = -num;
        count++;
    }

    do
    {
        buffer[length] = '0' + num % 10;
        num /= 10;
        length++;
    } while (num > 0);

    for (i = length; i >= 0; i--)
    {
        _putchar(buffer[i]);
    }

    count += length;
    return count;
}

