#include <stdio.h>

int isPrime(int num);

int main() {
  int nos, no = 0, i, j;

  printf("Enter the number of primes to be generated: ");
  scanf("%d", &nos);

  for(i = 2; 1; i++) {
    if(isPrime(i)) {
      printf("%d: %d\n", (no + 1), i);
      no++;
    }
    if(no >= nos) break;
  }
}

int isPrime(int num) {
  int factCnt = 0, i;

  for(i = 1; i <= num; i++) {
    if((num % i) == 0) factCnt++;
  }

  return (factCnt == 2) ? 1 : 0;
}
