#include <stdio.h>

int main() {
	int x[10], sum = 0;
	scanf_s("%d %d %d %d %d %d %d %d %d %d", &x[0], &x[1], &x[2], &x[3], &x[4], &x[5], &x[6], &x[7], &x[8], &x[9]);
	printf("%d %d %d %d %d %d %d %d %d %d \n", x[0], x[1], x[2], x[3], x[4], x[5], x[6], x[7], x[8], x[9]);
	for (int i = 0; i <= 9; i++) {
		sum += x[i];
	}
	int avg = sum / 10;
	printf("average = %d",avg);
	return 0;
}