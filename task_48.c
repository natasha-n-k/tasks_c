/*
Напишите программу, которая читает из входного потока натуральное число n.
Необходимо вывести в консоль "линию" в виде n символов '='. 
Например, если вводится n = 5, то на выходе должны получить:

=====
*/

#include <stdio.h>

int main(void)
{
    int n;
    scanf("%d;", &n);

    for (int i = 0; i < n; i++) {
         printf("=");     
    }

    return 0;
}

