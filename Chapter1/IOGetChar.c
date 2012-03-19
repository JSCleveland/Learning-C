#include <stdio.h>
#include <time.h>

/* Copy input to output. */

main() {
  int c;

  /* Get input from the Terminal */

  c = getchar();

  /* Copy the input to the Terminal as Output */

  while (c != EOF) {
    putchar(c);
    c = getchar();
  }
}
