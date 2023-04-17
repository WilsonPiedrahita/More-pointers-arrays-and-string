#include "main.h"
#include <stdio.h>

void display_complex_number(complex c){

  
    if (c.im >= 0)
    {
        printf("%.0f + %.0fi\n", c.re, c.im);
    }
    else
    {
        printf("%.0f - %.0fi\n", c.re, -c.im);
    }
}