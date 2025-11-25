➖ Subtraction of Two Pointers in C

Pointer subtraction allows you to calculate the number of elements between two memory locations.
This operation is only valid when:

✅ Both pointers point to the same data type
✅ Both pointers point within the same array or memory block

Otherwise, the behavior is undefined.

🧠 How Pointer Subtraction Works

When you subtract two pointers:

ptr2 - ptr1


The compiler computes:

(ptr2_address - ptr1_address) / sizeof(datatype)


This gives the number of elements, not bytes.

📌 Example Breakdown

Suppose:

ptr1 → 1000  
ptr2 → 1004


And both are int* pointers.

Difference in raw memory:

1004 - 1000 = 4 bytes


Since an int is 4 bytes:

4 / 4 = 1 element


So:

ptr2 - ptr1 = 1


This means ptr2 is one integer element ahead of ptr1.

🔍 Visual Illustration (Integer Array)
Index:   0      1      2      3  
Address: 1000   1004   1008   1012
Value:   10     20     30     40


If:

ptr1 = &arr[0]   → 1000
ptr2 = &arr[2]   → 1008


Then:

ptr2 - ptr1 = (1008 - 1000) / 4 = 2


Meaning there are 2 elements between the pointers.

🚫 Important Rules
❌ You cannot subtract pointers of different types

Example:

int* p;
float* q;

p - q;   // invalid

❌ You cannot subtract pointers from different arrays

Example:

int a[5];
int b[5];

&a[3] - &b[1];   // undefined behavior

❌ You cannot subtract pointers that do not belong to the same allocated block

Pointer subtraction only makes sense when the pointers track positions within the same object/array.

🧠 Why Pointer Subtraction Exists

Pointer subtraction is especially useful for:

Implementing your own versions of strlen, strchr, etc.

Traversing arrays safely

Calculating distances or offsets inside buffers

Low-level algorithms and memory manipulation

Debugging and cybersecurity analysis

📌 Summary
Pointers	Allowed?	Result
Same type, same array	✅	Number of elements between pointers
Same type, different memory blocks	❌	Undefined behavior
Different types	❌	Undefined behavior