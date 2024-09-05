/*
Напишите программу, которая читает из входного потока натуральное число n. 
С помощью цикла for найти все делители этого числа (то есть, натуральные числа, которые нацело делят число n, включая числа 1 и n). 
Все найденные делители вывести по порядку (начиная с наименьшего) в одну строчку через пробел.

Sample Input:

10
Sample Output:

1 2 5 10
*/

#include <stdio.h>

int main(void)
{
    int n;
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        if (n % i == 0) {
            printf("%d ", i);
        }
    }
    return 0;
}
