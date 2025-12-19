#include <stdio.h>
#include "conversor.h"

float celsius_fahrenheit(float c)
{
    float f;
    f = c * 1.8 + 32;

    return f;

}

float fahrenheit_celsius(float f)
{
    float c;
    c = (f - 32) / 1.8;

    return c;
}