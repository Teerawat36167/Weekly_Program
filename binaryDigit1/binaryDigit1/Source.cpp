#include <stdio.h>

//binaryDigit1
//level 2
char y[8] = {'0','0','0','0','0','0','0','0'};

int main() {
	int x;
	printf("Enter number :");
	scanf_s("%d", &x);
	if (x > 255) {
		printf("ERROR");
	}
	else {
		for (int i = 7; i >= 0; i--) {
			if (x % 2 != 0) {
				y[i] = '1';
			}
			x /= 2;
		}
		printf("%s", y);
	}
	return 0;
}