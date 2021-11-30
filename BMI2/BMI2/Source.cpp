#include <stdio.h>

int main() {
	float bmi, h, w;
	printf("Enter your height(cm) :");
	scanf_s("%f", &h);
	printf("Enter your weight(kg) :");
	scanf_s("%f", &w);
	h /= 100;
	bmi = w / (h * h);
	printf("BMI = %.2f \n", bmi);
	int x;
	if (bmi < 18.5) {
		x = 2;
	}
	else {
		x = bmi / 5;
	}
	if (x >= 3 && x <= 5) {
		switch (x) {
		case 3:printf("normal weight");
			break;
		case 4:printf("normal weight");
			break;
		case 5:printf("weight above standard");
			break;
		}
	}
	else if (x < 3) {
		printf("underweight");
	}
	else {
		printf("too fat");
	}
	return 0;
}