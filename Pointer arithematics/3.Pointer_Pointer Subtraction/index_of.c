//building the index_of function that returns the index of a pointer in an array
#include <stdio.h>

int index_of( int *start, int *target ) {
    return target - start; // pointer subtraction to find index


}
int main() {
    int arr[] = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100};
    int *ptr = &arr[6]; // pointer to the 7th element (value 70)

    int index = index_of(arr, ptr); 
    printf("Index of the target pointer in the array: %d\n", index); // Expected output: 6

    return 0;
}