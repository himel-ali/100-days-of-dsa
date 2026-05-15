#include <iostream>
#include <vector>
using namespace std;


// Vectors -> are like arrays, however dynamic in nature, can be of flaxible range. include in terminal -st=c++11 after g++.

//Vector syntax 

// vector <DataTypeOfVector> vec;

//Single number

int uniqueInVec(vector<int>& nums){
    int unique = 0;
    for (int i : nums){
        unique ^= i;
    }
    return unique;
}




int main (){
    vector <int> vec; /// Vector is defined here however it is a empty vector, size is 0.
    vector <int> vec2 = {1,2,3};
    vector <char> vec3 = {'a','b','c','d','e','f','g'};
    vector<int> vec4(3,0); // nameOfvector(size of vec, the repeated element in the vector)
    cout<< vec2.size()<< endl;
    

    // For Each Loop
    for (char i : vec3){ /// initiater is not storing the index here, it is storing the value in the index of the vector.
        cout<<i<<endl;
    }


    // Vector Function
    
    // size;
    cout<< "size "<< vec3.size()<< endl;

    // push_back
    vec.push_back(25);
    cout<< "Size after push_bcak "<< vec.size()<< endl;

    // pop_back ---> ladt element will be deleted
    vec.pop_back();
    cout<< "Size after push_bcak "<< vec.size()<< endl;

    // fornt() ---> We are trying to print the first value of vector
    cout<< "Front "<< vec3.front()<<endl;

    // back() ---> We are trying to print the last value of vector
    cout<< "Back "<< vec3.back()<<endl;

    // at() ---> gives out the value of index that we provide.
    cout<< "at "<< vec3.at(3)<<endl;


    ////// STATIC AND DYNAMIC ALLOCATION OF MEMORY
    // 1. arrays are allocated memory while compilation however for vectors memory is allocated while running the code, thats is the difference between static and dynamic memory
    // 2. Arrays are stored in stack memory and vectors are stored in heap memory.

    vector <int> vt;
    vt.push_back(1);
    vt.push_back(0);
    vt.push_back(2);
    vt.push_back(3);
    vt.push_back(4);

    cout<< vt.size()<<endl;//5
    cout<< vt.capacity()<<endl;//8


    //Single number(Pratice Problem)
    vector<int> nums = {4, 2, 1, 1, 2}; 

    cout<< "Unique ele in vector is "<< uniqueInVec(nums)<<endl;
    





    return 0;
}