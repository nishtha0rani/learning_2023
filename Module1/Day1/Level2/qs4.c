/* 4. Write a function to find the type of the character passed
    - 'A' to 'Z', return 1
    - 'a; to 'z', return 2
    - '0' to '9', return 3
    - Any Other printable symbols, return 4
    - Non printable symbols, return 5          */

/* 4. Write a function to find the type of the character passed
    - 'A' to 'Z', return 1
    - 'a; to 'z', return 2
    - '0' to '9', return 3
    - Any Other printable symbols, return 4
    - Non printable symbols, return 5          */
#include <stdio.h>
#include <ctype.h>
int getchartype(char c) {
    if (isupper(c)) {
        return 1;  // Uppercase alphabets
    } else if (islower(c)) {
        return 2;  // Lowercase alphabets
    } else if (isdigit(c)) {
        return 3;  // Digits
    } else if (isprint(c)) {
        return 4;  // Printable symbols
    } else {
        return 5;  // Non-printable symbols
    }
}

int main() {
    char c;
    printf("Enter a character: ");
    scanf("%c", &c);
    int result = getchartype(c);
    printf("%d\n", result);
    
    return 0;
}