#include <stdio.h>

int sumOfNaturalNumbersUsingLoop(int);
int sumOfNaturalNumbersUsingRecursion(int);

int main(int argc, char const *argv[]) {
  int num, result;

  printf("\nEnter a number: ");
  scanf("%d", &num);

  result = sumOfNaturalNumbersUsingRecursion(num);
  printf("The sum of natural numbers is %d", result);

  return 0;
}

// Sum of natural numbers using for loop
int sumOfNaturalNumbersUsingLoop(int n) {
  int sum = 0;
  for (; n != 0; n--)
    return sum;
}

// Sum of natural numbers using for recursion
int sumOfNaturalNumbersUsingRecursion(int n) {
  if (n == 0)
    return 0;
  return n + sumOfNaturalNumbersUsingRecursion(n - 1);
}