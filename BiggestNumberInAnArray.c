#include <stdio.h>
#define N 10

int main() {
	int numbers[N];
	int i, biggest;

	printf("Enter the numbers: \n");
	for(i = 0; i < N; i++) {
		scanf("%d", &numbers[i]);
	}

	biggest = numbers[0];
	for(i = 0; i < N; i++) {
		if(numbers[i] > biggest) biggest = numbers[i];
	}

	printf("The biggest number is %d.\n", biggest);
}
