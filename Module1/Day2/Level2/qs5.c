/* 5. Write a program to encode any given string such that it gets converted into an unrecognizable form. 
Also write a decode function to get back the original string.    */
#include <stdio.h>
#include <string.h>
void encode(char* str) {
    int length = strlen(str);
    for (int i = 0; i < length; i++) {
        if (str[i] != ' ') {
            str[i] += 1; 
        }
    }
}
void decode(char* str) {
    int length = strlen(str);
    for (int i = 0; i < length; i++) {
        if (str[i] != ' ') {
            str[i] -= 1;
        }
    }
}
int main() {
    char str[] = "Hello, World!";
    printf("Original String: %s\n", str);
    encode(str);
    printf("Encoded String: %s\n", str);
    decode(str);
    printf("Decoded String: %s\n", str);
    return 0;
}