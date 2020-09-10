#include<stdio.h>
int main() {
	char str[50];
	char* ptr;
	ptr = str;
	scanf_s("%s", str, 49);
	while (*ptr != 0) {
		if (*ptr >= 'a' && *ptr <= 'z') {
			printf("%c", *ptr - 'a' + 'A');
			ptr++;
		}
		if (*ptr >= 'A' && *ptr <= 'Z') {
			printf("%c", *ptr - 'A' + 'a');
			ptr++;
		}
	}
}