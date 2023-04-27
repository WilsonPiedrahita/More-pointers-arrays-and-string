#include "main.h"
#include <stdio.h>

char *_strncat(char *dest, char *src, int n)
{
    int dest_len = 0;
    char *dest_ptr = dest;

  
    while (*dest_ptr != '\0')
    {
        dest_ptr++;
        dest_len++;
    }

    while (*src != '\0' && n--)
    {
        *(dest_ptr++) = *(src++);
        dest_len++;
    }
    *dest_ptr = '\0';

    return dest;
}



