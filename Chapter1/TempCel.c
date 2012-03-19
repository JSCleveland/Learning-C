#include <stdio.h>

main()
{
  float cel, fahr;
  int up, low, step;

  low = 0;
  up = 200;
  step = 10;

  /* Header goes here! */

  printf("Celsius Fahrenheit");

  cel = low;
  while (cel <= up)
    {
      fahr = (9.0 / 5.0) * cel + 32;
      printf("%6f %10.3f", cel, fahr);
      cel = cel + step;
    }
}
