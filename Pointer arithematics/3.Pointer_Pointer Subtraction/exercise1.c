#include <stdio.h>

int main(){
    int arr[] = { 5,11,17,23,29,31,37,41 };

    int *ptr1 = arr;
    int *ptr2 = arr + 5;// points to the 6th element

    printf("Pointer ptr1 points to address: %p\n", (void*)ptr1);
    printf("Pointer ptr2 points to address: %p\n", (void*)ptr2);

    // Subtracting two pointers
    
    printf("After Subtraction, ptr2 - ptr1 = %ld\n", ptr2 - ptr1);

    //reverse subtraction
    printf("After Subtraction, ptr1 - ptr2 = %ld\n", ptr1 - ptr2);

    return 0;
}