#include <stdio.h>

main()
{
  int fahr;

  /* Header */
  
  printf("Fahrenheit Celsius\n");

  
  for (fahr = 0; fahr <= 300; fahr = fahr + 20)
    printf("%10d %6.2f\n", fahr, ( 5.0 / 9.0 ) * ( fahr - 32 ));
}
