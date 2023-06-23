/* 1. (b) Write a function to find biggest of 2 numbers using 
    - ternary operator */

#include <stdio.h>

int main(){
    int a, b, max;
    printf("Enter the value of a: \n");
    scanf("%d", &a);
    printf("Enter the value of b: \n");
    scanf("%d", &b);
    max = (a>b) ? a:b;
    printf("Biggest of %d and %d is %d", a, b, max);
   
return 0;
}