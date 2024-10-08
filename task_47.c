/*
Продолжите программу, которая должна вычислять первые n членов геометрической прогрессии и выводить их по порядку в одну строчку через пробел. Члены прогрессии вычисляются по следующей схеме:

b0 - первый член;
b0 * q - второй член;
b0 * q^2 - третий член;
...
b0 * q^(n-1) - n-й член
*/

#include <stdio.h>

int main(void)
{
    int b0, q, n;
    scanf("%d; %d; %d", &b0, &q, &n);

    for (int i = 0; i < n; i++) {
        int bi = b0 * pow(q, i);
        printf("%d", bi);
        if (i < n - 1) {
            printf(" ");
        }
    }

    return 0;
}
