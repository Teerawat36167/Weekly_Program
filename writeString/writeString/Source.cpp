#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>

//writeString
//level 4

int main() {
	FILE* fp;
	char x[1000100];
	fp = (fopen("data.txt","w+"));
	while (true) {
		scanf("%s", x);
		fprintf(fp, x);
		fprintf(fp, "\n");
		if (x[strlen(x)-1]=='.') {
			break;
		}
	}
	fclose(fp);
	return 0;
}