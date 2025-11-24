➕➖ Pointer Arithmetic: Adding & Subtracting Integers

Pointer arithmetic allows you to move a pointer forward or backward in memory by a number of elements, not bytes.
When you add or subtract an integer from a pointer, the value is first multiplied by the size of the pointed data type.

🧠 1. Addition of an Integer to a Pointer

When you do:

ptr = ptr + n;


What actually happens is:

ptr = ptr + (n * sizeof(datatype));

Example (64-bit system)

If an int is 4 bytes and:

ptr = 1000  (int pointer)
ptr = ptr + 5


Then:

ptr = 1000 + (5 × 4) = 1020


You moved the pointer forward by 5 integer elements, not 5 bytes.

🔍 Visual Illustration

Assume an integer array in memory:

Address   Value
1000      10
1004      20
1008      30
1012      40
1016      50
1020      60


If ptr = &arr[0] (1000):

ptr + 5 → 1020  (points to the 6th element)

➖ 2. Subtraction of an Integer from a Pointer

Pointer subtraction has the same rule:

ptr = ptr - n;


Becomes:

ptr = ptr - (n * sizeof(datatype));

Example

If ptr = 1000 and you subtract 5 from it:

ptr = 1000 - (5 × 4) = 980


You moved the pointer five integer positions backward.

🔍 Visual Illustration

Using the previous array:

ptr = 1020
ptr - 5 → 1000


This moves you back to the first element.

📌 Why Pointer Arithmetic Works This Way

Pointers store the address of an element, not raw bytes.

When you say “move 3 positions,” the compiler must jump:

3 × sizeof(type)


This ensures pointer arithmetic always lands on valid elements — not in the middle of them.