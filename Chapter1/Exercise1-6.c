#include <stdio.h>

/* Verify that the expression <getchar() != EOF> is 0 or 1. */
/* This program should return a success if EOF is 1 or 0, or an error if it's someting else.  */

main() {

  int c;
 
  /* Tell the user to give input  */
  
  printf("Press Return for output");

  c = (getchar() != EOF);
  
  /* Solve True or False  */
  
  if(c = 0) 
    printf("EOF is 0, so the statement is true.");
  else {
    if(c = 1) {
      printf("EOF is 1, so the statement is true.");
    }  else {
      printf("EOF is neither 1 or 0, so the statement is false.");
    }
  }
}
