#include <stdio.h>

int main()
{
  int fahr, cel;
  int low, up, step;

  low = 0;
  up = 300;
  step = 20;

  fahr = low;
  while (fahr <= up)
    {
      cel = 5 * (fahr-32) / 9;
      printf("%3d %6d\n", fahr, cel);
      fahr = fahr + step;
    }
}
