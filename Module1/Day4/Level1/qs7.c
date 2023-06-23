/*  Count no. of days   */
#include <stdio.h>
#include <stdlib.h> 
int countDays(char str[]) {
    int total_days = 0;
    int d = 0, m = 0, y = 0;
    int i = 0;
    while (str[i] != '/') {
        d = d * 10 + (str[i] - '0');
        i++;
    }
    i++; 
    while (str[i] != '/') {
        m = m * 10 + (str[i] - '0');
        i++;
    }
    i++; 
    while (str[i] != '\0') {
        y = y * 10 + (str[i] - '0');
        i++;
    }
    int months[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
    if ((y % 4 == 0 && y % 100 != 0) || y % 400 == 0) {
        months[1] = 29;
    }
    for (int i = 0; i < m - 1; i++) {
        total_days += months[i];
    }
    total_days += d;
    return total_days;
}
int main() {
    char str[50];
    printf("Enter the date (DD/MM/YYYY): ");
    scanf("%s", str);
    int result = countDays(str);
    printf("Total number of days: %d\n", result);
    return 0;
}
