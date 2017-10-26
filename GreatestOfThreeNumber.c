#include <stdio.h>

int greater(int x, int y);

int main() {
  int a, b, c;

  printf("Enter the first number: ");
  scanf("%d", &a);
  printf("Enter the second number: ");
  scanf("%d", &b);
  printf("Enter the third number: ");
  scanf("%d", &c);

  printf("The greatest number is %d.\n", greater(a , greater(b, c)));

}

int greater(int x, int y) {
  return (x > y) ? x : y;
}
