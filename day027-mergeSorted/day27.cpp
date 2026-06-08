#include <iostream>
#include <algorithm>
#include <climits>
#include <vector>
using namespace std;

// CPP STL ---> Standard template Library

// Containers --->
// 1. Vectors
//          .size ---> gives the size , content size of the vec
//          .capacity ---> gives out the real capacity of the vec
//          .push_back ---> adds an element to the end of the vec
//          .pop_back ---> deletes the end element in an vector
//          .emplace_back ---> adds an element to the end of the vec, works a liltle diff though.
//          .at() or [] ---> vec[i] is same as vec.at(i)
//          front ---> to acess the front element
//          back ---> to acess the last element 
//          erase ---> erase some element or a range of elements, we can pass the iterator - vec.erase(vec.begin() + 2, vec.begin() +  4) (for ele at second index) | this caan not change the capacity of the vector
//          insert --->   We can insert an element whereevr we want in the vector - vec.insert(vec.begin()+2, 100)

//          clear ---> clears the vector but the capacity remains the same

//          empty ---> if our vector is empty, gives out a bool result

// Iterators --->
//          vec.begin() ---> points the first element of the vec

//          vec.end() ---> points the next to last element of the vec, whuch is garbage value

//          vec.rbegin() --->              



// Initialization --->
//  vector <int>  vec ;
// vector <int> vec = {1,2,3};
// vector <int> vec =  (10,2);
// vector <int> vec2 =(vec1);


// 2. List --->
//


// Iterators

// Algorithms

// Functors


int main (){



    return 0;
}