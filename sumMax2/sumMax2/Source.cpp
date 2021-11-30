#include <stdio.h>

//sumMax2
//Level 2
int main() {
	int x, y, z;
	printf("Enter Number 1 :");
	scanf_s("%d", &x);
	printf("Enter Number 2 :");
	scanf_s("%d", &y);
	printf("Enter Number 3 :");
	scanf_s("%d", &z);
	if (x + y >= x + z && x + y >= y + z) {
		printf("%d + %d = %d", x,y,x+y);
	}
	else if (x + z >= x + y && x + z >= y + z) {
		printf("%d + %d = %d", x, z, x + z);
	}
	else if (y + z >= x + y && y + z >= x + z) {
		printf("%d + %d = %d", y, z, y + z);
	}
	return 0;
}