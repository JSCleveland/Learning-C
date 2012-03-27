#include <stdio.h>

/* Verify that the expression <getchar() != EOF> is 0 or 1. */
/* This program should return a success if EOF is 1 or 0, or an error if it's someting else.  */

main() {

  int c;
 
  /* Tell the user to give input  */
  
  printf("Press Return for output");

  c = (getchar() != EOF);
  printf("If the following number is 1 or 0, then EOF is 1 or 0 as the book stated: %d\n", c);
}
