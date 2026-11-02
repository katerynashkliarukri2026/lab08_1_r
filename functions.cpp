#include "functions.h"

int Count(const char* str, int i)
{
    if (str[i] == '\0' || str[i + 1] == '\0' || str[i + 2] == '\0')
        return 0;

    if ((str[i] == 'O' && str[i + 1] == 'G' && str[i + 2] == 'O') ||
        (str[i] == 'A' && str[i + 1] == 'G' && str[i + 2] == 'A'))
    {
        return 1 + Count(str, i + 1);
    }

    return Count(str, i + 1);
}

char* Change(char* dest, const char* str, int i, int j)
{
    if (str[i] == '\0')
    {
        dest[j] = '\0';
        return dest;
    }

    if (str[i + 1] != '\0' && str[i + 2] != '\0' &&
        ((str[i] == 'O' && str[i + 1] == 'G' && str[i + 2] == 'O') ||
            (str[i] == 'A' && str[i + 1] == 'G' && str[i + 2] == 'A')))
    {
        dest[j] = '*';
        dest[j + 1] = '*';

        return Change(dest, str, i + 3, j + 2);
    }

    dest[j] = str[i];

    return Change(dest, str, i + 1, j + 1);
}