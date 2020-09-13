#include<stdio.h>
int main() {
	int fac, n = 1;
	scanf_s("%d", &fac);
	for (int i = 1; i <= fac; i++) {
		n *= i;
	}
	printf("%d", n);
}