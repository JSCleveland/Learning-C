#include <stdio.h>

/* This entire program could be optimized by making cel and fahr Integers instead of Floats */

/* This would be incorrect if the step weren't divisible by 5 */

main()
{
  float cel, fahr;
  int up, low, step;

  low = 0;
  up = 200;
  step = 10;

  /* Header goes here! */

  printf("Celsius Fahrenheit\n");

  cel = low;
  while (cel <= up)
    {
      fahr = (9.0 / 5.0) * cel + 32.0;
      printf("%6.0f %10.0f\n", cel, fahr);
      cel = cel + step;
    }
}
