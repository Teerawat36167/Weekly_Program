#include <stdio.h>

//binaryDigit2
//level 2
int main() {
	int x,y=1;
	int a, b;
	printf("Enter number :");
	scanf_s("%d", &x);
	if (x > 255) {
		printf("ERROR");
	}
	else {
		for (a = 7; a >= 0; a--) {
			if (a > 0) {
				for (b = 1; b <= a; b++) {
					y *= 2;
				}
			}
			if (x >= y) {
				x -= y;
				printf("1");
			}
			else {
				printf("0");
			}
			y = 1;
		}
	}
	return 0;
}