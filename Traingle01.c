#include <stdio.h>

int main() {
	int n, ROWS, COLS;

	scanf("%d", &n);

	for(ROWS = 0; ROWS < n; ROWS++) {
		for(COLS = n-1; COLS > ROWS; COLS--) {
			printf(" ");
		}
		for(COLS = n-ROWS; COLS <= n; COLS++) {
			printf("%d", COLS);
		}
		for(COLS = n-1; COLS >= n-ROWS; COLS--) {
			printf("%d", COLS);
		}
		printf("\n");
	}
}
