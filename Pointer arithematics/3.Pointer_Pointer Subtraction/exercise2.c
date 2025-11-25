// pointer subtraction of different data types
#include <stdio.h>

int main() {
    float float_arr[] = {1.3, 2.5, 3.7, 4.9, 5.11, 6.13};

    double d_arr[] = {2.4, 4.8, 6.12, 8.16, 10.20, 12.24};

    float *fptr =float_arr; // pointer to first element
    float *fptr2 = &float_arr[4]; // pointer to fifth element   

    printf("Pointer fptr points to address: %p\n", (void*)fptr);
    printf("Pointer fptr2 points to address: %p\n", (void*)fptr2);

    // Subtracting two pointers
    printf("After Subtraction, fptr2 - fptr = %ld\n", fptr2 - fptr);

    double *dptr = d_arr; // pointer to first element
    double *dptr2 = &d_arr[4]; // pointer to fifth element      
    printf("Pointer dptr points to address: %p\n", (void*)dptr);
    printf("Pointer dptr2 points to address: %p\n", (void*)dptr2);      

    // Subtracting two pointers
    printf("After Subtraction, dptr2 - dptr = %ld\n", dptr2 - dptr);

    //how pointer subtraction varies with data types
    printf("\nPointer subtraction varies with data types:\n");
    printf("Size of float data type: %zu bytes\n", sizeof(float));
    printf("Size of double data type: %zu bytes\n", sizeof(double));

    return 0;

}