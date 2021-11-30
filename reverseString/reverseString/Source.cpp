#include <stdio.h>
#include <string.h>

//reverseString1
//level 3

int main() {
	char x[100];
	printf("Enter string :");
	scanf_s("%[^\n]", x, 100);
	printf("Reverse string :");
	for (int i = strlen(x)-1; i >= 0; i--) {
		printf("%c", x[i]);
	}
	return 0;
}