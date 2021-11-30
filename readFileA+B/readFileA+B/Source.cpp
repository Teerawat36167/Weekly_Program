#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//level 4
//readFile
//Sum x+y

int main() {
	FILE* fp;
	int x, y;
	fp = fopen("a.txt", "r");
	fscanf(fp, "%d %d", &x,&y);
	fclose(fp);
	printf("%d + %d = %d", x, y, x + y);
	fopen("b.txt", "w");
	fprintf(fp, "%d", x + y);
	fclose(fp);
	return 0;
}