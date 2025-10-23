#include <stdio.h>

#define LOWER 0   /* lower limit of the table */
#define UPPER 300 /* upper limit */
#define STEP 20   /* step size */

/* Print Farenheit-Celcius table */

void printForward() {
  int fahr;

  for (fahr = LOWER; fahr <= UPPER; fahr = fahr + STEP) {
    printf("%3d %6.1f\n", fahr, (5.0 / 9.0) * (fahr - 32));
  }
}

void printBackward() {
  int fahr;

  for (fahr = UPPER; fahr >= LOWER; fahr = fahr - STEP) {
    printf("%3d %6.1f\n", fahr, (5.0 / 9.0) * (fahr - 32));
  }
}

int main() {
  printf("Printing Forward\n");
  printForward();

  printf("======================\n");
  printf("Printing Backward\n");
  printBackward();

  return 1;
}
