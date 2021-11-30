#include <stdio.h>

int main() {
	int x,i=1,w,y,z;
	printf("Enter number :");
	scanf_s("%d",&x);
	for (w = x-1; w > 0 ; w--) {
		for (y = w; y > 0; y--) {
			printf(" ");
		}
		for (y = 0; y < (3*i)-(1+i); y++) {
			printf("*");
		}
		printf("\n");
		i++;
	}
	z = (2 * x) - 1;
	for (i = 0; i < z; i++) {
		printf("*");
	}
	return 0;
}