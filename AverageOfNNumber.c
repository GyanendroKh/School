#include <stdio.h>
#define N 10

int main() {
	int numbers[N];
	int i, sum = 0, n, avg;

	printf("Enter the numbers: \n");
	for(i = 0; i < N; i++) {
		scanf("%d", &n);
		sum += n;
	}

	avg = (sum / N);

	printf("The average of the numbers is %d.\n", avg);
}
