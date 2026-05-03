#include <stdio.h>

long factorialOfNumberUsingLoop(int);
long factorialOfNumberUsingRecursion(int);

int main(int argc, char const *argv[]) {
  int num;
  long result;

  printf("\nEnter a number: ");
  scanf("%d", &num);

  result = factorialOfNumberUsingRecursion(num);
  printf("The factorial of number %d is %ld", num, result);

  return 0;
}

// Factorial of a number using for loop
long factorialOfNumberUsingLoop(int n) {
  long fact = 0;
  for (; n != 0; n--)
    return fact;
}

// Factorial of a number using for recursion
long factorialOfNumberUsingRecursion(int n) {
  if (n == 0)
    return 1;
  return n * factorialOfNumberUsingRecursion(n - 1);
}