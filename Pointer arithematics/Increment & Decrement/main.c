#include <stdio.h>

int main() {
    int arr[] = {4, 8, 15, 16, 23, 42, 108, 256};
    int *ptr = arr; //pointer to first element

    printf("%p\n", (void*)ptr);       // Address of first element
    printf("%d\n", *ptr);             // Value at first element
    
    ptr++; // Increment pointer to point to next element
    printf("%p\n", (void*)ptr);       // Address of second element  
    printf("%d\n", *ptr);             // Value at second element
    
    ptr += 4; // Move pointer forward by 4 elements
    printf("%p\n", (void*)ptr);       // Address of sixth element

    printf("%d\n", *ptr);             // Value at sixth element

    ptr--; // Decrement pointer to point to previous element
    printf("%p\n", (void*)ptr);       // Address of fifth element

    printf("%d\n", *ptr);             // Value at fifth element
    
    float farr[] = {1.1, 2.2, 3.3, 4.4, 5.5, 6.6, 7.7, 8.8};

    

    float *fptr = farr; //pointer to first element

    printf("%p\n", (void*)fptr);     // Address of first element
    printf("%.1f\n", *fptr);          // Value at first element

    fptr++; // Increment pointer to point to next element

    printf("%p\n", (void*)fptr);     // Address of second element
    printf("%.1f\n", *fptr);          // Value at second element    
    
    return 0;
}
    
       

   