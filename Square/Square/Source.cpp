#include <stdio.h>

int main() {
	int x,y,i;
	printf("Enter number :");
	scanf_s("%d",&i);
	for (x = 1; x <= i; x++) {
		for (y = 1; y <= i; y++) {
			printf("*");
		}
		printf("\n");
	}
	return 0;
}
