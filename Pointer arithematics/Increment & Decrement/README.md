🔼🔽 Pointer Increment & Decrement in C

Understanding how pointers move in memory is one of the most important fundamentals of advanced C programming.
Pointer arithmetic is not regular arithmetic—when you increment or decrement a pointer, the change depends on the size of the data type it points to.

🧠 1. What Happens When You Increment a Pointer?

When you do:

ptr++;


You are not adding 1 byte.
You are adding size_of(datatype) bytes.

Example (64-bit architecture)

int = 4 bytes

float = 4 bytes

double = 8 bytes

char = 1 byte

If ptr is an int pointer storing address 1000:

ptr == 1000
ptr++ → ptr == 1004


Because:

1000 + sizeof(int) = 1000 + 4 = 1004


If ptr is a float pointer storing address 1000:

ptr == 1000
ptr++ → ptr == 1004

🔽 2. What Happens When You Decrement a Pointer?

When you do:

ptr--;


You subtract sizeof(datatype) bytes.

Example

If ptr is an int pointer storing address 1000:

ptr == 1000
ptr-- → ptr == 996


Because:

1000 - sizeof(int) = 1000 - 4 = 996


If ptr is a float pointer storing address 1000:

ptr-- → ptr == 996

🧩 3. Why Does This Happen?

Because pointers don't represent "numbers."
They represent addresses of elements.

If you increment an int pointer, you want it to point to the next int, not the next byte.

This is why pointer arithmetic works in units of data types, not bytes.

📌 4. Visual Example

Let’s say you have an array:

int arr[3] = {10, 20, 30};


Memory (addresses shown for example):

Address  Value
1000     10
1004     20
1008     30


Pointer movement:

int *p = arr;   // p = 1000
p++;            // p = 1004  (next element)
p++;            // p = 1008
p--;            // p = 1004