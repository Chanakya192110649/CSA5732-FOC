#include <stdio.h>

int main() {
    int n, sum = 0, i, j;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    for (i = 0; i <= n; i++) {
        
        for (j = 1; j <= i; j++) {
            
            sum += j;
        }
    }

    printf("Sum of the series is: %d\n", sum);

    return 0;
}
