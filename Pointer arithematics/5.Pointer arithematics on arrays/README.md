# 📌 Pointer Arithmetic on Arrays

Understanding how pointers behave with arrays is a core part of mastering advanced C programming.
This concept is powerful because arrays and pointers are deeply connected, and pointer arithmetic allows you to traverse arrays efficiently.

## 🔍 What You Need to Know
### ✅ 1. Arrays behave like pointers

When you declare an array like:

int arr[] = {1, 2, 3, 4, 5};


arr acts like a constant pointer to the first element

arr is equivalent to &arr[0]

But unlike a pointer variable, you cannot do arr++ (because arr is not modifiable)

### ✅ 2. Pointer Arithmetic Rules

Pointer arithmetic makes sense only when:

You add/subtract an integer to/from a pointer

You subtract two pointers of the same type

Adding two pointer addresses has no meaning and is invalid.

When you increment a pointer, it moves to the next element, not the next byte.

Example:
If ptr is an int * at address 1000 and sizeof(int) = 4

ptr + 1 → 1004

ptr + 2 → 1008

### 🧪 Example Program — Traversing an Array Using a Pointer
#include <stdio.h>

int main(){

    int N = 5;

    // An array
    int arr[] = { 1, 2, 3, 4, 5 };

    // Declare pointer variable
    int* ptr;

    // Point the pointer to first element in array arr[]
    ptr = arr;

    // Traverse array using ptr
    for (int i = 0; i < N; i++) {

        // Print element at which ptr points
        printf("%d ", ptr[0]);
        ptr++;
    }
}

### 📝 What’s happening here?

ptr = arr; makes the pointer point to the first element.

Each time you do ptr++, it moves to the next integer.

ptr[0] is another way of saying *ptr.

## 🧠 Key Takeaways

Arrays and pointers are closely related

Pointer arithmetic uses type size, not bytes

ptr[i] is always equivalent to *(ptr + i)

Traversing arrays with pointers is extremely efficient in C