#include <stdio.h>

#define IN 1 /* inside a word */
#define OUT 0 /* outside a word */

/* Count lines, words, and characters in input */

int main()
{
  int character, NewLine, NewWord, NewCharacter, state;

  state = OUT;
  NewLine = NewWord = NewCharacter = 0;

  while ((character = getchar()) != EOF)
    {
      ++NewCharacter;
      if (character == '\n')
	++NewLine;
      if (character == ' ' || character == '\n' || character == '\t')
	state = OUT;
      else if (state == OUT)
	{
	  state = IN;
	  ++NewWord;
	}
    }
  printf("%d %d %d\n", NewLine, NewWord, NewCharacter);
}

  
