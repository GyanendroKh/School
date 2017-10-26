#include <stdio.h>

int main() {
	int ROWS, COLS, n;

	scanf("%d", &n);

	for(ROWS = 1; ROWS <= n; ROWS++) {
		for(COLS = 0; COLS < ROWS; COLS++) {
			printf("%d", ROWS);
		}
		printf("\n");
	}

}
