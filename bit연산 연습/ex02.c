#include <stdio.h>

unsigned char LEDs = 1;

int main() {

	printf("%d ", LEDs);
	for (int i = 0; i < 4; i++) {	
		for (int j = 1; j < 8; j++) {
			LEDs <<= 1;
			printf("%d ", LEDs);
		}
		for (int j = 1; j < 8; j++) {
			LEDs >>= 1;
			printf("%d ", LEDs);
		}
	}

	return 0;
}