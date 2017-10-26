#include <stdio.h>

int main() {

  int first = 0, second = 1, third;
  int n, i;

  printf("Enter the Terms of the Series: ");
  scanf("%d", &n);

  printf("Fibonacci Series: \n");
  printf("%d %d ", first, second);

  for(i = 0; i < n-2; i++) {
    third = first + second;
    printf("%d ", third);
    first = second;
    second = third;
  }
  printf("\n");

}
