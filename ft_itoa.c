#include "stdlib.h"

static int  get_length(int n)
{
    int length = 0;

    if (n <= 0) {
        length = 1;
    }

    while (n) {
        n /= 10;
        length++;
    }

    return length;
}

char*   ft_itoa(int n)
{
    int length;
    char *str;
    unsigned int num;
    int i;

    length = get_length(n);
    str = (char *)malloc(length + 1);
    if (str == NULL) {
        return NULL;
    }

    if (n < 0) {
        num = -n;
        str[0] = '-';
    } else {
        num = n;
    }

    str[length] = '\0';
    i = length - 1;

    if (num == 0) {
        str[i] = '0';
        i--;
    }

    while (num) {
        str[i] = (num % 10) + '0';
        num /= 10;
        i--;
    }

    return str;
}