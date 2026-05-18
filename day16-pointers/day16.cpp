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
    int** ptrToptr = &ptr;
    cout<<"Address of ptr which stores the address of num using pointer in hex is : " <<ptrToptr
    << endl;
    cout<< *ptrToptr<<endl;
    cout<< *ptr<<endl;








 return 0;
}