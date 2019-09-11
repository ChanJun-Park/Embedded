#include <stdio.h>

unsigned char LEDs;

int LED_function(int input) {
	return 1 << input;
}

int main() {
	int temp = 0;
	scanf("%d", &temp);

	int return_value;
	return_value = LED_function(temp);
	printf("return_value - Decimal : %d, Hexa : %x \n", return_value, return_value);
	return 0;
}