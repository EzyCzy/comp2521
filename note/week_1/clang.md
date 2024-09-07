clang

compile with
clang -Wall -Werror -g -fsanitize=address,undefined -0 prog prog.c

-Wall (compiler warn us about almost all possible syntax mistakes
-Werror (treats warning to be treated as errors)
-g (generate debug information)

Sanitizer
AddressSanitizer(ASan): detects invalid memory access
MemorySanitizer(MSan): detects uses of uninitialized memory
UndefinedBehaviourSanitizer(UBSan): detects various kinds of undefined behaviour
LeakSanitizer(LSan): detects memory leaks

MSan is not compatible with ASan and LSan

1st compile ASan, LSan, UBSan
2nd compile MSan, UBSan

make asan|msan|nosan
make clean (to remove current compiled file)

All errors :skull:

- attempted double-free
Attempts to free a memory that is already freed

- dynamic-stack-buffer-overflow (shouldnt appear in the course)
Accessing memory outside a variable length array (VLA)

- heap-buffer-overflow
Attempts to access memory outside than what has been allocated on the heap malloc, calloc, realloc
relative location access if left then negative, if right then exceed size

- heap-use-after-free
Attempts to access memory that has already been freed

- index out of bounds
obviously
- integer overflow
obviously
- misaligned address
recall 1521
- bull pointer
accessing null pointer read/write

- SEGV on unknown address
Use MSan instead of ASan
commonly access null pointer, using uninitialised pointers or array indexes

- stack-overflow
Recursive too deep

- stack-buffer-overflow or underflow
Accessing memory outside than has been located on the stack

- use-of-uninitialized-value
Declare a variable / allocated memory but never assigned any value to it
Read (https://comp2521unsw.github.io/sanitisers-guide/)
