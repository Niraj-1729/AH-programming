// Advanced Pointer Notation
// Consider pointer notation for the two-dimensional numeric arrays. consider the following declaration

// int nums[2][3]  =  { { 16, 18, 20 }, { 25, 26, 27 } };
// In general, nums[ i ][ j ] is equivalent to *(*(nums+i)+j) 

// Pointer notation in C++
 

// Pointers and String literals
// String literals are arrays containing null-terminated character sequences. String literals are arrays of type character plus terminating null-character, with each of the elements being of type const char (as characters of string can’t be modified).

 
// This declares an array with the literal representation for “geek”, and then a pointer to its first element is assigned to ptr. If we imagine that “geek” is stored at the memory locations that start at address 1800, we can represent the previous declaration as: 

// Pointers and String Literals
 

// As pointers and arrays behave in the same way in expressions, ptr can be used to access the characters of a string literal. For example:

// char x = *(ptr+3);
// char y = ptr[3];
// Here, both x and y contain k stored at 1803 (1800+3).

// Pointers to pointers
// In C++, we can create a pointer to a pointer that in turn may point to data or another pointer. The syntax simply requires the unary operator (*) for each level of indirection while declaring the pointer.

// char a;
// char *b;
// char ** c;
// a = ’g’;
// b = &a;
// c = &b;
// Here b points to a char that stores ‘g’ and c points to the pointer b.

// Void Pointers
// This is a special type of pointer available in C++ which represents the absence of type. Void pointers are pointers that point to a value that has no type (and thus also an undetermined length and undetermined dereferencing properties). This means that void pointers have great flexibility as they can point to any data type. There is a payoff for this flexibility. These pointers cannot be directly dereferenced. They have to be first transformed into some other pointer type that points to a concrete data type before being dereferenced. 


// // C++ program to illustrate Void Pointer
// #include <bits/stdc++.h>
// using namespace std;
// void increase(void* data, int ptrsize)
// {
//     if (ptrsize == sizeof(char)) {
//         char* ptrchar;
  
//         // Typecast data to a char pointer
//         ptrchar = (char*)data;
  
//         // Increase the char stored at *ptrchar by 1
//         (*ptrchar)++;
//         cout << "*data points to a char"
//              << "\n";
//     }
//     else if (ptrsize == sizeof(int)) {
//         int* ptrint;
  
//         // Typecast data to a int pointer
//         ptrint = (int*)data;
  
//         // Increase the int stored at *ptrchar by 1
//         (*ptrint)++;
//         cout << "*data points to an int"
//              << "\n";
//     }
// }
// void geek()
// {
//     // Declare a character
//     char c = 'x';
  
//     // Declare an integer
//     int i = 10;
  
//     // Call increase function using a char and int address
//     // respectively
//     increase(&c, sizeof(c));
//     cout << "The new value of c is: " << c << "\n";
//     increase(&i, sizeof(i));
//     cout << "The new value of i is: " << i << "\n";
// }
// // Driver program
// int main() { geek(); }
// Output
// *data points to a char
// The new value of c is: y
// *data points to an int
// The new value of i is: 11
// Invalid pointers
// A pointer should point to a valid address but not necessarily to valid elements (like for arrays). These are called invalid pointers. Uninitialized pointers are also invalid pointers.

// int *ptr1;
// int arr[10];
// int *ptr2 = arr+20;
// Here, ptr1 is uninitialized so it becomes an invalid pointer and ptr2 is out of bounds of arr so it also becomes an invalid pointer. (Note: invalid pointers do not necessarily raise compile errors)

// NULL Pointers
// A null pointer is a pointer that point nowhere and not just an invalid address. Following are 2 methods to assign a pointer as NULL;

// int *ptr1 = 0;
// int *ptr2 = NULL;
// Advantages of Pointers
// Pointers reduce the code and improve performance. They are used to retrieve strings, trees, arrays, structures, and functions.
// Pointers allow us to return multiple values from functions.
// In addition to this, pointers allow us to access a memory location in the computer’s memory.