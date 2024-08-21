#include <stdio.h>

int main() {
    int n;
    
    scanf("%d", &n);
    
    if(n <= 0) {
        return 0;
    }
    
    int first = 1, second = 1;
    
    int i = 1;
    printf("%d", first);
    
    if(n > 1) {
        printf(" %d", second);
        i = 2;
    }
    
    while (i < n) {
        int next = first + second;
        printf(" %d", next);
        first = second;
        second = next;
        i++;
    }
    return 0;
}
    
    