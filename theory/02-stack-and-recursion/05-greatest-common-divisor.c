#include <stdio.h>

// Function to find GCD using recursion
int GCD_usingRecursion(int num1, int num2) {
  if (num2 == 0)
    return num1;
  else
    return GCD_usingRecursion(num2, num1 % num2);
}

// Function to find GCD using loop
int GCD_usingLoop(int num1, int num2) {
  while (num1 != num2) {
    if (num1 > num2) {
      num1 -= num2;
    } else {
      num2 -= num1;
    }
  }
  return num1;
}

int main() {
  int num1, num2;
  printf("Enter two positive integers: ");
  scanf("%d %d", &num1, &num2);

  // Using recursion
  printf("GCD of %d and %d is: %d\n", num1, num2, GCD_usingRecursion(num1, num2));
  
  // Using loop
  printf("GCD of %d and %d is: %d\n", num1, num2, GCD_usingLoop(num1, num2));

  return 0;
}
