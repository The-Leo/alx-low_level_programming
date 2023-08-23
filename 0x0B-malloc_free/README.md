# MEMORY ALLOCATION IN C
This project dealt with the following: 

* What is the difference between automatic and dynamic allocation
* What is malloc and free and how to use them
* Why and when to use malloc. 
* How to use valgrind to check for memory leak

# Understanding Memory Allocation and Memory Leaks

## Memory Allocation
In programming, memory allocation refers to the process of setting aside a portion of a computer's memory for a program to use. Dynamic memory allocation allows programs to request memory during runtime to store data structures, variables, and other resources.

In languages like C, the `malloc` function is commonly used for dynamic memory allocation. It reserves a specified amount of memory from the heap and returns a pointer to the allocated memory block.

## Memory Leaks
A memory leak occurs when the memory that was dynamically allocated is not properly deallocated or freed when it is no longer needed. This leads to memory being consumed without being released back to the system, causing potential problems.

Symptoms of memory leaks include:
- Gradual increase in memory consumption during program execution.
- Slower program performance and responsiveness.
- Long-running programs consuming excessive memory over time.

## Best Practices for Memory Management
To avoid memory leaks and ensure efficient memory usage, follow these best practices:
1. **Allocate and Free:** Always pair memory allocations (e.g., using `malloc`, `calloc`, etc.) with proper deallocation using the `free` function.

2. **Check for Allocation Success:** After allocating memory, check if the allocation was successful (i.e., the returned pointer is not NULL) before using the allocated memory.

3. **Avoid Overwriting Pointers:** Do not overwrite pointers without freeing the previously allocated memory, as this can lead to memory leaks.

4. **Avoid Accessing Freed Memory:** Never access memory that has been deallocated, as it can cause undefined behaviour.

5. **Regularly Test for Leaks:** Use tools and techniques to test your program for memory leaks, especially in long-running applications.

6. **Use RAII (Resource Acquisition Is Initialization):** In languages that support RAII, such as C++, use automatic memory management techniques to tie resource allocation and deallocation to object lifetimes.

## Conclusion
Memory allocation and memory management are crucial aspects of programming. By understanding memory leaks and following best practices, you can create more reliable and efficient programs.
