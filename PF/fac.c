#include<stdio.h>
int main() {
	long fac, n = 1;
	scanf_s("%d", &fac);
	if (fac >= 1 && fac <= 30) {
		for (int i = 1; i <= fac; i++) {
			n *= i;
		}
		printf("%d", n);
	}

}