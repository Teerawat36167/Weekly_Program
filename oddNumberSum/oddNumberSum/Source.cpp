#include <stdio.h>

int main() {
	int x,i,sum=0;
	printf("Enter number :");
	scanf_s("%d",&x);
	if (x == 0) {
		printf("Sum = 0");
	}
	else if (x < 0) {
		printf("ERROR");
	}
	else {
		for (i = 1; i <= x; i++) {
			if (i % 2 != 0) {
				sum += i;
			}
			else {
				sum += 0;
			}
		}
		printf("Sum = %d", sum);
	}
	return 0;
}