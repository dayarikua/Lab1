#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
    int m, n;
    double a[10][10], x;

    printf("m and n ");
    scanf("%d %d", &m, &n);

    printf("input elements \n", n, m);
    for (int i = 0; i < m; i++)
        for (int j = 0; j < n; j++)
            scanf("%lf", &a[i][j]);

    printf("input x ");
    scanf("%lf", &x);

    printf("\nmatrix\n");
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) printf("%6.2f ", a[i][j]);
        printf("\n");
    }

    for (int i = 0; i < m; i++) {
        int l = 0, r = n - 1, pos = -1, steps = 0;
        while (l <= r) {
            steps++;
            int mid = (l + r) / 2;
            if (a[i][mid] == x) {
                pos = mid;
                r = mid - 1;
            }
            else if (a[i][mid] < x) {
                l = mid + 1;
            }
            else {
                r = mid - 1;
            }
        }
        if (pos != -1) {
            printf("\nfound: (%d, %d), steps: %d\n", i + 1, pos + 1, steps);
            return 0;
        }
    }

    printf("\nnot found\n");
    return 0;
}