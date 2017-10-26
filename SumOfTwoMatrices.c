#include <stdio.h>
#define N 5

int main() {

	int matrix1[N][N], matrix2[N][N], matrixSum[N][N];
	int i, j;

	printf("Enter the elements of the first matrix : \n");
	for(i = 0; i < N; i++) {
		printf("Enter elements for the row number %d: \n", i+1);
		for(j = 0; j < N; j++) {
			scanf("%d", &matrix1[i][j]);
		}
	}

	printf("Enter the elements of the second matrix : \n");
  for(i = 0; i < N; i++) {
		printf("Enter elements for the row number %d: \n", i+1);
    for(j = 0; j < N; j++) {
      scanf("%d", &matrix2[i][j]);
    }
  }

	printf("The sum of the two matrices is : \n");
  for(i = 0; i < N; i++) {
    for(j = 0; j < N; j++) {
      matrixSum[i][j] = matrix1[i][j] + matrix2[i][j];
		  printf("%4d", matrixSum[i][j]);
    }
		printf("\n");
  }

}
