#include <stdio.h>

int hcf(int a, int b);

int main() {
	int n1, n2;

	printf("Enter the first number: ");
	scanf("%d", &n1);

	printf("Enter the second number: ");
	scanf("%d", &n2);

	printf("The HCF of the two numbers is : %d.\n", hcf(n1, n2));
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
