#include <stdio.h>

int main() {
    int n, reversedN = 0, originalN;

    printf("Enter an integer: ");
    scanf("%d", &n);

    originalN = n;

   
    while (n > 0) {
        reversedN = reversedN * 10 + n % 10;
        n /= 10;
    }

   
    if (originalN == reversedN)
        printf("%d is a palindrome.\n", originalN);
    else
        printf("%d is not a palindrome.\n", originalN);

    return 0;
}
