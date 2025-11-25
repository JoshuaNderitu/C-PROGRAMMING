🔍 Pointer Comparison in C

Understanding how pointers are compared is an essential part of mastering pointer arithmetic, memory navigation, and array handling in C.

Pointer comparisons help you:

Verify if two pointers reference the same memory location

Detect NULL pointers

Iterate safely through arrays

Perform checks based on memory order

This README covers:

🔸 Comparing two pointers

🔸 Comparing a pointer to NULL

🔸 Comparing pointers while iterating through arrays

🔸 A hands-on C coding exercise for your repo

🟦 1. Comparing Two Pointers

C allows pointer comparison using all relational operators:

>, >=, <, <=, ==, !=


A pointer comparison is valid only when both pointers point to elements within the same array or memory block.

✔ Example: Pointer to Array vs First Element

Both of these point to the same address:

&arr → Address of the array

&arr[0] → Address of the first element

So the comparison will evaluate to true (== is true).

🟦 2. Comparing Pointers to NULL

Any pointer type can be compared to NULL.

Why this matters:

Prevents dereferencing uninitialized pointers

Used in data structures (linked lists, trees, stacks)

Helps detect pointer errors

Example logic:

if (ptr == NULL) {
    // safe to handle missing pointer
}

🟦 3. Pointer Comparison in Arrays

When used with arrays, pointer comparisons allow you to:

Iterate through elements

Check pointer movement

Count or categorize values using pointer stepping (ptr++)

This technique is foundational for:

Manual array iteration

Custom search functions

Writing your own memory utilities

🧠 Summary

Pointer comparison is a key skill for advanced C programming because it gives you fine-grained control over memory.
You use pointer comparisons to:

✔ Check if two pointers refer to the same memory location
✔ Detect null/uninitialized pointers
✔ Traverse arrays using pointer increments
✔ Compare pointer addresses safely