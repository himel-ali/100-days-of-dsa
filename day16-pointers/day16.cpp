#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
using namespace std;


// Memory Address --->
// int num = 10;
// address is stored in a hexadecimal format in our system's memory
// We can print the address of the num by Address of Operator (&)  ---> &num


// Pointers & multiple uses of Operators

// POINTERS ---> special vaairbels that store address of other variables

// Syntax --->
// int* ptr = &num;




int main(){

    int num = 10;
    cout<<"Address of num in hex is : " <<&num<< endl;

    // POINTERS
    int* ptr = &num;
    cout<<"Address of num using pointer in hex is : " <<ptr<< endl;

    char nameInitial = 'H';
    char* ptr2 = &nameInitial; // char* in cpp is a special data type, that is why it didnt waork as i wanted, that is why we need this (void*) 
    cout<<"Address of nameInitial using pointer in hex is : " <<(void*)ptr2<< endl;

    // POINTER TO POINTER ---> a pointer that is storing the address of an already existing pointer

    // * Dereference ---> The thing this operator does is to return the actual data that is stored in the address which is stored in a pointer
    int** ptrToptr = &ptr;
    cout<<"Address of ptr which stores the address of num using pointer in hex is : " <<ptrToptr
    << endl;
    cout<< **ptrToptr<<endl;

    // Null Pointer ---> it does not store/point any valid address in the system's memmory
    int* ptrNull = NULL;

    // Why Null pointer came into existance --->
    // It is because even if we just define a pointer and do not store any address in it, it returns a garbage value

    //We can not dereference the null pointer

    // Pass by refernce ---> 
    // 1.  by pointers ---> (int* ptr)

    // 2. refereces(alias) ---> (int& a)

    // Array Pointer ---> int arr[], here arr is a pointer which returns the address of the first index of the array


    // arr is a constant pointer and throughout the code it can not be changed

    int arr[] = {1,2,3,4,5};
    cout << "printing out arr : " <<arr<<endl;
    cout << "print ing out the arr with dereferencer : "<<*arr<<endl;

    // Pointer Arithmetic
    // Increament (++) / Decrement (--) ---> increases or decreases the size by 1 datatype's actual size

    // Add (+) / Substract (-) --->


    









 return 0;
}