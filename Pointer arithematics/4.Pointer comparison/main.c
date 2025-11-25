//pointer comparisons

#include <stdio.h>

int main(){
    int arr[] = {23, 34, 45, 56, 67, 78, 89, 90};

    int *ptr_start = arr; //pointer to first element
    int *ptr_end = &arr[5]; //pointer to sixth element

    //comparing two pointers the loop stops when ptr_start is greater than ptr_end
    while(ptr_start <= ptr_end){
        printf("Value at address %p is %d\n ", (void*)ptr_start, *ptr_start); 
        ptr_start++; //move to next element
    }

}