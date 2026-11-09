#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
int main() {
	float z = -INFINITY;
	float x;
	printf("Type a number: \n");
	scanf("%f", &x);
	if (x > z && x < -19) {
		float y = 2 * x * x * x + 8 * x * x;
		printf("y = %f\n", y);
	}
	else if (x > -3 && x <= 0) {
		float y = 2 * x * x * x + 8 * x * x;
		printf("y = %f\n", y);
	}
	else {
		printf("Wrong number");
	}
	return 0;
}