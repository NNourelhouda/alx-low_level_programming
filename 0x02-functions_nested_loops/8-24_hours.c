#include <stdio.h>
#include "main.h"

/*
 * jack_bauer function that prints every minute of the day of Jack Bauer,
 * starting from 00:00 to 23:59.
 * Prototype: void jack_bauer(void);
 */

void jack_bauer(void) 
{
int hour, minute;
for (hour = 0; hour < 24; hour++)
{
for (minute = 0; minute < 60; minute++)
{
putchar(hour / 10 + '0');
putchar(hour % 10 + '0');
putchar(':');
putchar(minute / 10 + '0');
putchar(minute % 10 + '0');
putchar('\n');
}
}
}
