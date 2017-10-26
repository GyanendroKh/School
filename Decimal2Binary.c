#include <stdio.h>

int dec2bin(int dec);

int main() {
	int num;

	printf("Enter the decimal number : ");
	scanf("%d", &num);

	printf("The binary equivalent of %d is %d.\n", num, dec2bin(num));
}

int dec2bin(int dec) {
	if(dec == 0 || dec == 1) return dec;
	return ((dec2bin(dec / 2) * 10) + (dec % 2));
}
