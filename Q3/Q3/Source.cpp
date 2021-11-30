#include <stdio.h>
//Position Q3=(3*(10+1))/4
//level 3
int main() {
	int num[10], x, y, swap;
	float q3;
	for (int i = 0; i <= 9; i++) {
		printf("Enter number %d :", i+1);
		scanf_s("%d", &num[i]);
	}
	for (x = 0; x < 9; x++) {
		for (y = 0; y < 9 - x; y++) {
			if (num[y] > num[y + 1]) {
				swap = num[y];
				num[y] = num[y + 1];
				num[y + 1] = swap;
			}
		}
	}
	for (int i = 0; i <= 9; i++) {
		printf("%d ", num[i]);
	}
	printf("\n");
	q3 = num[7] + (0.25 * (num[8] - num[7]));
	printf("Q3 = %.2f", q3);
	return 0;
}