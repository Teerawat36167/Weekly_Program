#include <stdio.h>

int main() {
	int x,y,num;
	scanf_s("%d", &num);
	for (x = 1; x <= num;x++) {
		for (y = 1; y <= num; y++) {
			if (y <= x) {
				printf("*");
			}
			else {
				printf(" ");
			}
		}
		printf("\n");
	}
	return 0;
}