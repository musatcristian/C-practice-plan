### [X] Exercise A — Inspect memory addresses  
Create a program with an int, a double, an array of integers and a pointer to one array element.  
Print their values and addresses using appropriate format specifiers. Use %p with (void *) casts for pointers.  
Answer:  
      - What does p + 1 mean for an int *p?  
      a: it means the next address in memory after skipping the size of 1 int from the current address p is pointing at
      - Why isn't it necessarily one byte later?
      a: because an int in C can take up more then one byte

### [X] Exercise B — Modify data through pointers  
Write a function void swap(int *a, int *b) that exchanges two integers. Call it from main.  
Then explain why passing two integers by value to a function would not directly change the caller's variables.

### [X] Exercise C — Use a struct  
Define a struct Sensor with an integer ID, a floating-point reading and a status field. Create an instance, modify it through a pointer, and print its fields.  
Inspect sizeof(struct Sensor). Explain why the size may exceed the sum of its field sizes: compilers may insert padding for alignment.

### [X] Exercise D — Stack and heap  
Write a function that allocates an array using malloc, initializes its elements, prints them, and frees the allocation.  
Compare this with a fixed-size local array. Identify who is responsible for releasing dynamically allocated memory and what happens if you forget.