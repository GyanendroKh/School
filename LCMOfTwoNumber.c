#include <stdio.h>

int hcf(int a, int b);
int lcm(int a, int b);

int main() {
  int a, b;
  printf("Enter the first number: ");
	scanf("%d", &a);

	printf("Enter the second number: ");
	scanf("%d", &b);
  
  printf("The LCM of %d and %d is %d.\n", a, b, lcm(a, b));
  
  return 0;
}

int hcf(int a, int b) {
	int max = (a > b) ? a : b;
  int min = (a > b) ? b : a;

	if((max % min) != 0) {
		hcf(min, max % min);
	}else {
		return min;
	}
}

int lcm(int a, int b) {
  return (a * b) / hcf(a, b);
}
