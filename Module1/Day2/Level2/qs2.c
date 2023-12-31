/* 2. W.A.P to compare the items in a box, assume equal size boxes
Boxes shall have unique items stored in random order
Boxes are compared True if there is one to one mapping of items
return the final result 1 or 0
Example of Equal Boxes:
A[3] = {200, 10, -90}
B[3] = {-90, 200, 10}    
Example of Unequal Boxes:
A[3] = {200, 9, -90}
B[3] = {-90, 200, 10}    
Note: The array should not be sorted      */
#include <stdio.h>
int compareBoxes(int boxA[], int boxB[], int size) {
    int matchCount = 0;
    for (int i = 0; i < size; i++) {
        int currentItem = boxA[i];
        int found = 0;
        for (int j = 0; j < size; j++) {
            if (boxB[j] == currentItem) {
                found = 1;
                break;
            }
        }

        if (found) {
            matchCount++;
        }
    }
    return (matchCount == size) ? 1 : 0;
}
int main() {
    int boxA[] = {200, 10, -90};
    int boxB[] = {-90, 200, 10};
    int size = sizeof(boxA) / sizeof(boxA[0]);
    int result = compareBoxes(boxA, boxB, size);
    printf("Result: %d\n", result);
    return 0;
}