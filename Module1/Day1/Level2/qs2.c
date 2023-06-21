 /*2.  Write a program to print the grade of the given student using if else if block
    - 90 to 100 -> "Grade A"
    - 75 to 89 -> "Grade B"
    - 60 to 74 -> "Grade C"
    - 50 to 59 -> "Grade D"
    - 36 to 49 -> "Grade E"
    - 0 to 35 -> "Grade F"
In main check the return value and print the below
65 -> "Grade A"
66 -> "Grade B"
67 -> "Grade C"
68 -> "Grade D"
69 -> "Grade E"
70 -> "Grade F"

 */

#include <stdio.h>
char get_grade(int score) {
    char grade;
    
    if (score >= 90 && score <= 100) {
        grade = 'A';
    } else if (score >= 75 && score <= 89) {
        grade = 'B';
    } else if (score >= 60 && score <= 74) {
        grade = 'C';
    } else if (score >= 50 && score <= 59) {
        grade = 'D';
    } else if (score >= 36 && score <= 49) {
        grade = 'E';
    } else if (score >= 0 && score <= 35) {
        grade = 'F';
    } else {
        grade = '\0'; // Invalid score
    }
    
    return grade;
}

int main() {
    int score;
    
    printf("Enter the score: ");
    scanf("%d", &score);
    char grade = get_grade(score);
    switch (grade) {
        case 'A':
            printf("Grade A\n");
            break;
        case 'B':
            printf("Grade B\n");
            break;
        case 'C':
            printf("Grade C\n");
            break;
        case 'D':
            printf("Grade D\n");
            break;
        case 'E':
            printf("Grade E\n");
            break;
        case 'F':
            printf("Grade F\n");
            break;
        default:
            printf("Invalid score\n");
            break;
    }
    return 0;
}