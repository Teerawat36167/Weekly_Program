#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>

//reverseString2
//level 3

int main() {
    char str[100];
    char* ptr;
    ptr = str;
    printf("Enter string :");
    scanf("%s", str);
    while (*ptr != '\0') {
        ptr++;
    }
    ptr--;
    printf("Reverse string :");
    while (ptr >= str) {
        printf("%c", *ptr);
        ptr--;
    }
   return 0;
}