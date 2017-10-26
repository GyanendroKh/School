#include <stdio.h>

int main() {
  int num, factCnt = 0, i;

  printf("Enter the number to check: ");
  scanf("%d", &num);

  for(i = 1; i <= num; i++) {
    if((num % i) == 0) factCnt++;
  }

  if(factCnt == 2) {
    printf("%d is a prime number.\n", num);
  }else {
    printf("%d is not a prime number.\n", num);
  }
}
