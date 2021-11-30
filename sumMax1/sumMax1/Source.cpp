#include <stdio.h>

//sumMax1
//Level 2
int main() {
	int x, y, z;
	printf("Enter Number 1 :");
	scanf_s("%d", &x);
	printf("Enter Number 2 :");
	scanf_s("%d", &y);
	printf("Enter Number 3 :");
	scanf_s("%d", &z);
	if (x >= z && y >= z) {
		printf("%d + %d = %d", x, y, x + y);
	}
	else if (x >= y && z >= y) {
		printf("%d + %d = %d", x, z, x + z);
	}
	else if (y >= x && z >= x) {
		printf("%d + %d = %d", y, z, y + z);
	}
	return 0;
}