/* 1. Assume User will be providing input in the form of a string as show below. 
Write a function to parse the string and initialize an array of structures. 
Example String : "1001 Aron 100.00" 
Example Structure : 
    struct Student{
        int rollno;
        char name[20];
        float marks;
    };
Note: User must be able define the no. of inputs/size of the array during runtime.  */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct Student{
    int roll_no;
    char name[100];
    float marks;
};
typedef struct Student Student;
void initStudent(Student* , int , char*, float); 
int main(){
    int size = 100;
    int roll;
    char n[20];
    float m;
    Student arr[size]; 
    printf("Enter the size of array(number of students): ");
    scanf("%d", &size);
    printf("Enter Value: \n");
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &roll);
        scanf("%s", n);
        scanf("%f", &m);
        initStudent(&arr[i], roll, n, m);
    }
     printf("Displaying value: ");
    for (int i = 0; i < size; i++)
    {
         printf("\n%d\t", arr[i].roll_no);
         printf("%s\t", arr[i].name);
        printf("%.2f\t", arr[i].marks);
    }
    return 0;
}
void initStudent(Student* ptr, int roll, char *nptr, float m){
    ptr->roll_no = roll;
    ptr->marks = m;
    strcpy(ptr->name, nptr);
}


