#define _CRT_SECURE_NO_WARNINGS
#define _USE_MATH_DEFINES
#include <stdio.h>
#include <math.h>
int main() {
	int j;
	int i;
	double x = 1.0 / 3;
	int n;
	int oper = 0;
	double s = 0;
	double p = 1;
	oper +=3;
	printf("print n");
	scanf("%d", &n);
	for (i = 1;i <= n; i++) {
		s = s + (4 * i - 1);
		double l = 1 - ((4 * x * x) / (M_PI * M_PI * s));
		p = p * l;
		oper +=15;
	}
	oper +=1;
	printf("%lf\n", p);
	printf("Oper= %d", oper);
	return 0;

}