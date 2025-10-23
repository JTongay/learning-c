/*
 * Similarly to the print characters program in 4-char-input-output,
 * this counts the number of chars
 * */

#include <stdio.h>

/* Count characters; 1st version */
int main1() {
  /* long variables are at least 32 bits */
  long nc;

  nc = 0;
  while (getchar() != EOF)
    ++nc;
  printf("%1ld\n", nc);

  return 1;
}

/* Count characters; 2nd version */
int main() {
  double nc;

  for (nc = 0; getchar() != EOF; ++nc) {
    printf("%.0f\n", nc);
  };
  printf("%.0f\n", nc);

  return 1;
}
