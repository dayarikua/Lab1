 #define _CRT_SECURE_NO_WARNINGS
#define _USE_MATH_DEFINES
#include <stdio.h>
#include <math.h>
int main() {
	int j;
	int i;
	int oper = 0;
	double x = 1.0/3;
	int n;
	double p = 1;
	oper += 2;
	printf("print n");
	scanf("%d", &n);
	for (i = 1;i <= n; i++) {
		double s = 0;
		oper += 4;
		for (j = 1;j <= i; j++) {
			s =s + (4*j - 1);
			oper +=6;
	}
		double l = 1 - ((4 * x * x) / (M_PI * M_PI * s));
		p = p * l;
		oper += 10;
	}
	oper += 1;
	printf("%lf\n", p);
	printf("Oper %d", oper);
	return 0;

}