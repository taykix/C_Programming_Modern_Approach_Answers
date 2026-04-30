

//Exercise 1a
//If changes were made, compiling parts of the code again is faster
//than compiling whole program
//It would be easier to find bugs, and relate to functionality with the program

//Exercise 1b
//Linking or writing the make file takes more time

//Exercise 2
// b) function definitions should not be put in a header file
// because it can create double object files for the functions.

//Exercise 3
// Yes, it would be problematic because compiler looks for system headers in a 
//specific directory. If the project has spesific stdio.h it will take that one.
//Else it continues searching the normal system include directories.

//Exercise 4a
// "Output if DEBUG is defined:"
// Value of i : 1
// Value of j : 2
// Value of k : 3
// Value of i + j : 3
// Value of 2 * i + j - k : 1

//Exercise 4b
// Output if DEBUG is not defined:

//Exercise 4c
// Because of the ifdef states of the DEBUG definition as conditional compilation.

//Exercise 4d
//Yes it is necesserty because it compiles line by line. Processor reads the lines top to bottom
//and header files are copy pasted to the position.

//Exercise 5
demo: main.o f2.o f1.o
gcc -o demo main.o f2.o f1.o
main.o: main.c f1.h
gcc -c main.c
f2.o: f2.c f2.h f1.h
gcc -c f2.c
f1.o: f1.c f1.h f2.h
gcc -c f1.c

//Exercise 6
//a)all files
//b) f1.c and demo
//c) all files
//d) f2.c f1.c
