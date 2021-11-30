#include <stdio.h>

int main() {
	int x,i,y;
	printf("Enter Number :");
	scanf_s("%d",&x);
	y = x * x;
	for (i = 1; i <= y; i++) {
		printf("*");
		if (i % x == 0) {
			printf("\n");
		}
	}
	return 0;
}