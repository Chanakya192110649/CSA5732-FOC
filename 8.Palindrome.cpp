#include <stdio.h>
#include <string.h>

int main() {
	char s[100]; 
	int i, len, count = 0;

	printf("Enter the string: ");
	scanf("%s", s);

	len = strlen(s);

	for (i = 0; i < len ; i++) { 
		if (s[i] == s[len - i - 1]) {
			count++;
		}
	}

	if (count == len ) { 
		printf("Palindrome\n");
	} else {
		printf("Not a palindrome\n"); 
	}

	return 0;
}
