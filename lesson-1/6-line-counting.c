/* Count lines on input */

#include <stdio.h>

int main() {
  int c, n1;

  n1 = 0;

  while ((c = getchar()) != EOF) {
    // This is SINGLE QUOTES on purpose
    // "A character written between single quotes represents an integer value
    // equal to the numerical value of the character in the machine's character
    // set"
    //
    // This is called a "Character Constant"
    //
    // ex: 'A' is a character constant for the int 65
    if (c == '\n') {
      ++n1;
    }
  }

  printf("%d\n", n1);

  return 1;
}
