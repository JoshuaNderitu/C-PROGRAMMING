//pointer arithemetic on arrays

#include <stdio.h>

int main() {
    int arr[] = {12,13,26,45,65,76,87,97,112,115};
    int N = 10;

    int *ptr;
    
    ptr = arr;//points to the first element

    int i;
    
    for(i = 0; i < N; i++){

        printf("Arrays moving forward: %d\n ", ptr[0]);
        ptr++;
    }

    ptr = &arr[N ]; //points to the location of the last element

    for(i = 0; i<N; i++){

        printf("Arrays moving backwards: %d\n", ptr[-1]);
        ptr--;
    }

    return 0;
}