What memcmp Does
memcmp (which stands for "memory compare") is a simple function that tells you if two blocks of memory are identical or different.

Think of it as an older sibling to strcmp, but memcmp has two key differences:

It doesn't stop at a null terminator (\0).

You must tell it exactly how many bytes (n) to check.

The Manual Explained
SYNOPSIS
C

int memcmp(...): The function gives you back an int (a number). This number tells you the result of the comparison.

const void \*s1: The first block of memory you want to compare.

const void \*s2: The second block of memory you want to compare.

size_t n: How many bytes you want it to check.

DESCRIPTION
"The memcmp() function compares the first n bytes (each interpreted as unsigned char) of the memory areas s1 and s2."

This means it goes byte-by-byte, from 0 up to n-1, checking if s1[i] is the same as s2[i].

The (unsigned char) part is important. It means the byte 11111111 is treated as the number 255 (a big value), not -1 (a small value). This ensures the comparison is fair and consistent.

RETURN VALUE
"The memcmp() function returns an integer less than, equal to, or greater than zero..."

This is the core of the function. It's just like a subtraction problem:

If s1 and s2 are identical for all n bytes: It returns 0.

If s1 and s2 are different: It stops at the very first byte where they don't match. It then returns the difference between those two bytes.

return (unsigned char)s1[i] - (unsigned char)s2[i];

Example:

You want to compare "abc" and "abZ" for 3 bytes.

Byte 0: Is 'a' == 'a'? Yes. (Both are 97)

Byte 1: Is 'b' == 'b'? Yes. (Both are 98)

Byte 2: Is 'c' == 'Z'? No.

s1[2] is 'c' (value 99).

s2[2] is 'Z' (value 90).

Stop! The function subtracts them: 99 - 90 = 9.

It returns 9 (a positive number), telling you that s1 is "greater than" s2.

Simple Summary of Return Value:

Returns 0 if they are equal.

Returns a negative number if s1 is "less than" s2 at the first difference.

Returns a positive number if s1 is "greater than" s2 at the first difference.
