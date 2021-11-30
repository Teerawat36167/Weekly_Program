#include <stdio.h>

int main() {
	float bmi, h, w;
	printf("Enter your height(cm) :");
	scanf_s("%f", &h);
	printf("Enter your weight(kg) :");
	scanf_s("%f", &w);
	h /= 100;
	bmi = w / (h*h);
	printf("BMI = %.2f \n", bmi);
	if (bmi < 18.5) {
		printf("underweight");
	}
	else if (bmi >= 18.5 && bmi < 25) {
		printf("normal weight");
	}
	else if (bmi >= 25 && bmi < 30) {
		printf("weight above standard");
	}
	else {
		printf("too fat");
	}
	return 0;
}