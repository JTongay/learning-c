#include <stdio.h>

/* Print Farenheit-Celcius table */

void printForward() {
  int fahr;

  for (fahr = 0; fahr <= 300; fahr = fahr + 20) {
    printf("%3d %6.1f\n", fahr, (5.0 / 9.0) * (fahr - 32));
  }
}

void printBackward() {
  int fahr;

  for (fahr = 300; fahr >= 0; fahr = fahr - 20) {
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
