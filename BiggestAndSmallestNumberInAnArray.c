#include <stdio.h>
#define N 10

int main() {
	int numbers[N];
	int smallest, biggest;
	int i;

	printf("Enter the numbers: \n");
	for(i = 0; i < N; i++) {
		scanf("%d", &numbers[i]);
	}

	i = 0;
	biggest = smallest = numbers[i];
	for(i = 0; i < N; i++) {
		if(numbers[i] > biggest) {
			biggest = numbers[i];
		}
		if(numbers[i] < smallest) {
			smallest = numbers[i];
		}
	}

	printf("The smallest number is %d.\n", smallest);
	printf("The biggest number is %d.\n", biggest);
}
