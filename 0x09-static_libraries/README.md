# What is a static library?
What is a static library, how does it work, how to create one, and how to use it. 
Basic usage of ar, ranlib, nm. 

A static library is a collection of precompiled object code units, usually containing functions and data that can be reused by multiple programs. When you compile your program against a static library, the code from the library is physically copied into your executable file. This means that your executable contains all the necessary code from the library, making it self-contained. Static libraries have the file extension .a (on Unix-like systems) or .lib (on Windows).

## How to Use Static Libraries:
1. **Compilation**: To create a static library, you first compile the individual source files into object files using the compiler. For example:
```C
gcc -c lib1.c -o lib1.o
gcc -c lib2.c -o lib2.o
```
2. **Library Creation**: Next, you create a static library using the object files using the ```ar``` (archiver) command:
   ```ar rcs libmylib.a lib1.o lib2.o```

3. **Usage**: To use the static library in your program, you include its header file in your source code and link against the library during compilation:

   ```gcc main.c -o myprogram -L/path/to/library -lmylib```
