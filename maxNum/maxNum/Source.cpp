#include <stdio.h>

//maxNum1
int main() {
	int a, b, c;
	printf("Number 1:");
	scanf_s("%d", &a);
	printf("Number 2:");
	scanf_s("%d", &b);
	printf("Number 3:");
	scanf_s("%d", &c);
	if (a >= b && a >= c) {
		printf("Maxnumber = %d", a);
	}
	else if (b > a && b > c) {
		printf("Maxnumber = %d", b);
	}
	else if (c > a && c > b) {
		printf("Maxnumber = %d", c);
	}
	return 0;
}