#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char str[100];
    int i, len;
    int isPalindrome = 1; 

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    
    if (str[strlen(str) - 1] == '\n')
        str[strlen(str) - 1] = '\0';

    
    for (i = 0; str[i]; i++) {
        str[i] = tolower(str[i]);
    }

    len = strlen(str);

   
    for (i = 0; i < len / 2; i++) {
        if (str[i] != str[len - i - 1]) {
            isPalindrome = 0; 
            break;
        }
    }

    if (isPalindrome)
        printf("%s is a palindrome.\n", str);
    else
        printf("%s is not a palindrome.\n", str);

    return 0;
}
