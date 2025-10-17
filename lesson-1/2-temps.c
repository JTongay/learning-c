#include <stdio.h>

/*
 * print Farenheit-Celcius Table for fahr = 0, 20, ..., 300
 */

void celciusToFarenheit(int lower, int upper, int step) {
  float fahr, celsius;

  celsius = lower;
  printf("Celcius Farenheit\n");

  while (celsius <= upper) {
    fahr = celsius * (9.0 / 5.0) + 32.0;
    printf("%3.0f %6.1f\n", celsius, fahr);

    celsius = celsius + step;
  }
}

int main() {
  float fahr, celsius; /* Use Floating point arithmetic instead of integer for
                          more accurate results */
  int lower, upper, step;

  lower = 0;   /* lower limit of temperature table */
  upper = 300; /* upper limit */
  step = 20;   /* step size */

  fahr = lower;
  printf("Farenheit Celcius\n");
  while (fahr <= upper) {
    celsius = (5.0 / 9.0) * (fahr - 32.0);
    printf("%3.0f %6.1f\n", fahr,
           celsius); /* Notice the 6.1 in the print here, it says to print 1
                        digit after the decimal point */
    fahr = fahr + step;
  }

  celciusToFarenheit(0, 300, 20);

  return 1;
}
