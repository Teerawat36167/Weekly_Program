#include <stdio.h>

int main() {
	int a,b,c;
	printf("Number 1:");
	scanf_s("%d", &a);
	printf("Number 2:");
	scanf_s("%d", &b);
	printf("Number 3:");
	scanf_s("%d", &c);
	if (a-b >= 0 && a-c >= 0) {
		printf("Maxnumber = %d", a);
	}
	else if (b-c > 0 && b-a > 0) {
		printf("Maxnumber = %d", b);
	}
	else if (c-b > 0 && c-a > 0) {
		printf("Maxnumber = %d", c);
	}
	return 0;
}