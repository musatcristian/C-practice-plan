### Exercise A — Use-after-free

Allocate an integer array, free it, and then deliberately attempt to access it. Compile with AddressSanitizer and investigate the diagnostic.

Do not rely on the program crashing: undefined behavior may appear to work or fail inconsistently.
```bash
gcc -g -O1 -Wall -Wextra \
    -fsanitize=address -fno-omit-frame-pointer \
    use_after_free.c -o use_after_free
./use_after_free
```


### Exercise B — Out-of-bounds access

Create an array of five integers and intentionally access index five. Run it with AddressSanitizer.

Explain the difference between a valid array index and a memory address that happens to be readable.

### Exercise C — Integer overflow

Write a program that adds two signed integers near their maximum representable value. Use UndefinedBehaviorSanitizer to investigate the overflow.
```bash
gcc -g -O1 -Wall -Wextra \
    -fsanitize=undefined overflow.c -o overflow
./overflow
```

Do not assume the result of signed overflow is a wrapped value. The C language does not guarantee that behavior.

### Exercise D — Fix the defects

For each bug, document:
- The root cause.
- The sanitizer's diagnostic.
- The smallest correct fix.
- A test that verifies the fix.


### Practice these commands:
| Command | Purpose |
|:-------:|---------|
| break main | Stop at the start of main |
| run | Start the program |
| next | Execute the next source line without stepping into a function |
| step | Step into a function call |
| print variable	| Inspect an expression |
| display variable | Show an expression whenever execution stops |
| backtrace | Inspect the call stack |
| continue | Resume execution |
| quit | Exit GDB |
|
