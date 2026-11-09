#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {
	float x;
	printf("Type a number: \n");
	scanf("%f", &x);
	if (x >= 8 && x < 23) {
		float y = -5 * x * x * x + 10;
		printf("y = %f\n", y);
	}
	else {
		printf("Wrong number\n");
	}
	return 0;
}