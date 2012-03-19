#include <stdio.h>

main()
{
  float fahr, cel;
  int low, up, step;

  low = 0;
  up = 300;
  step = 20;

  /* This is the Heading. */

  printf("Fahrenheit Celsius\n");
  

  fahr = low;
  while (fahr <= up)
    {
      cel = (5.0 / 9.0) * (fahr - 32);
      printf("%10.0f %7.1f\n", fahr, cel);
      fahr = fahr + step;
    }
}
