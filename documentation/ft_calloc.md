calloc()
The calloc() function alloce would result in integer overflow, then calloc() returns an error. By contrast, an integer overflow would not be detected in
the following call to malloc(), with the result that an incorrectly sized block of memory would be allocated:

           malloc(nmemb * size);

     🧠 The Problem: Overflow in nmemb * sizeates memory for an array of nmemb elements of size bytes each and returns a pointer to the allocated memory.  The memory is set to zero.
       If nmemb or size is 0, then calloc() returns a unique pointer value that can later be successfully passed to free().

       If the multiplication of nmemb and siz

When you do:

c
total_size = nmemb \* size;
If nmemb and size are both large enough, their product can exceed the maximum value that a size_t can hold — which is SIZE_MAX. This causes integer overflow, meaning the result wraps around and becomes a much smaller (and incorrect) value.

This can lead to:

Under-allocation of memory

Buffer overflows

Security vulnerabilities

✅ The Protection: nmemb > SIZE_MAX / size
This check ensures that the multiplication won’t overflow:

c
if (size > 0 && nmemb > SIZE_MAX / size)
return NULL;
Here’s how it works:

SIZE_MAX / size gives the maximum safe value for nmemb such that nmemb \* size won’t exceed SIZE_MAX.

If nmemb is greater than that, then nmemb \* size would overflow — so we return NULL to prevent unsafe allocation.

🔍 Why Check size > 0 First?
To avoid division by zero:

If size == 0, then SIZE_MAX / size is undefined.

So we only perform the division when size > 0.

🧪 Example
Let’s say:

SIZE_MAX = 4,294,967,295 (on a 32-bit system)

size = 4

Then:

SIZE_MAX / size = 1,073,741,823

So if nmemb > 1,073,741,823, the multiplication would overflow.

✅ TL;DR
This check:

Prevents overflow in nmemb \* size

Ensures safe memory allocation

Avoids subtle bugs and security risks
