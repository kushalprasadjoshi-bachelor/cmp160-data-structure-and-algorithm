/*
FIBONACCI SERIES:
    0   1   1   2   3   5   8   .....
*/

#include <stdio.h>

// Declare required function
int fib(int n, int a, int b);

int prev = 0, current = 1, next;

int main(int argc, char const *argv[]) {
  int num;
  printf("Enter the number of terms: ");
  scanf("%d", &num);

  // Using loop
  printf("Required fibonacci series is: %d \t\b%d", prev, current);
  for (int i = 2; i < num; i++) {
    printf("\t%d", next = prev + current);
    prev = current;
    current = next;
  }

  printf("\n");

  // Using recursion
  fib(num, 0, 1);

  return 0;
}

// Defination of fib function
int fib(int n, int a, int b) {
  if (n > 0) {
    printf("%d\t", a);
    fib(n - 1, b, a + b);
  }
}