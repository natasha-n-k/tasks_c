/*
Напишите программу, которая читает из входного потока два натуральных числа n и m,
 записанных через пробел, причем n < m. Выведите в консоль в одну строчку через пробел все числа кратные 3 
(нацело делятся на 3) из интервала [n, m].
*/

#include <stdio.h>

int main() {
    int n, m;
    
    if(scanf("%d %d", &n, &m) !=2) {
        printf("Error");
        return 0;
    }
    while(n <= m) {
        if(n % 3 == 0) {
            printf("%d ", n);
        }     
        n++;
    }
    return 0;
}