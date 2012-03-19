#include <stdio.h>

main() {
  double fahrenheit;

  /* Header */
  
  printf("Fahrenheit Celsius\n");

  
  for (fahrenheit = 300; fahrenheit >= 0; fahrenheit = fahrenheit - 20) {
      double celcius = ( 5.0 / 9.0 ) * ( fahrenheit - 32 );
      printf("%10f %6.2f\n", fahrenheit, celcius);
    }
}
