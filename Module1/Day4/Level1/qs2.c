/* Min and Max Element of an Array   */
#include <stdio.h>
int main(){
    int arr[100], i, size, max, min;
    printf("Enter the number of elements you want to add in array: ");
    scanf("%d", &size);
    printf("Enter Elements in array: ");
    for(i=0; i<size; i++){
        scanf("%d", &arr[i]);
    }
    max = arr[0];
    for(i = 0; i<size; i++){
        if(arr[i]> max){
            max = arr[i];
        }
    }
    printf("Maximum element of array is: %d\n", max);
    min = arr[0];
    for(i = 0; i<size; i++){
        if(arr[i]< min){
            min = arr[i];
        }
    }
    printf("Minimum element of array is: %d", min);
    return 0;
}