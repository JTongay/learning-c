/**
 * The simplest example, a program that copies its input to its output one
 * character at a time. What will happen after you compile/run this, the program
 * will be running in your terminal, start typing, hit enter, then it will echo
 * what you typed
 *
 * PSUEDOCODE:
 * read a character
 * while (character is not end-of-file indicator)
 *  output the character just read
 *  read a character
 */

#include <stdio.h>

/* Copy input to output; 1st version */

int main() {
  /*
   * We are intentionally using an int type here. We can't use the `char` type
   * since EOF is too big. Need to fit the potential of EOF in the `c` variable
   * and int apparently is big enough. EOF is an integer defined in stdio.h
   * */
  int c;

  c = getchar();

  while (c != EOF) {
    putchar(c);
    c = getchar();
  }

  return 1;
}

/* Copy input to output; 2nd version */
int main1() {
  int c;

  while ((c = getchar()) != EOF) {
    putchar(c);
  }

  return 1;
}
