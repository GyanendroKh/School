#include <stdio.h>

int factorial(int n);

int main() {
  int num;

  printf("Enter the number: ");
  scanf("%d", &num);
  printf("The factorial of %d is %d.\n", num, factorial(num));
}

int factorial(int n) {
  if(n == 0) return 1;
  return (n * factorial(n - 1));
}
