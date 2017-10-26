#include <stdio.h>

int main() {
	int num, rev = 0, n;

	printf("Enter the number: ");
	scanf("%d", &num);

	n = num;

	while(n != 0) {
		rev = rev * 10 + (n % 10);
		n /= 10;
	}

	if(rev == num) {
		printf("The given number (%d) is palindrome.\n", num);
	}else {
		printf("The given number (%d) is not palindrome.\n", num);
	}

}
