### 1. Object lifetime and dynamic allocation
Time: 60–90 min  
Continue with the GNU C Language Manual.  
Focus on pointers, dynamic memory allocation, arrays and function calls. Understand dangling pointers, use-after-free, double-free, out-of-bounds access and uninitialized values.

> [GNU C Ref](https://www.gnu.org/software/c-intro-and-ref/manual/c-intro-and-ref.html)

### 2. Undefined behavior and integer overflow
Time: 60 min  
Consult cppreference: undefined behavior and integer types.  
Learn why signed integer overflow is undefined in C, while unsigned arithmetic wraps modulo the type's range. Also study invalid shifts and out-of-bounds array access.
>
>[C_Cpp Ref behaviour](https://en.cppreference.com/w/c/language/behavior)  
> [C_Cpp Ref integers](https://en.cppreference.com/w/c/types/integer)


### 3. Sanitizers
Time: 45–60 min  
Read the GCC documentation on instrumentation options.  
Focus on AddressSanitizer (-fsanitize=address) and UndefinedBehaviorSanitizer (-fsanitize=undefined). Learn what each detects and what it cannot guarantee.

> [GNU Gcc](https://gcc.gnu.org/onlinedocs/gcc/Instrumentation-Options.html)


