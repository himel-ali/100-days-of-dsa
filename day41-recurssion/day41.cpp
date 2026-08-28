#include <bits/stdc++.h>
using namespace std;

// Recursion  --->   fnx calls itself until not stopped by base case
// mostly works on logical trust / belive

// print n to 1

void printTillN(int n){
    if  (n == 0) return;

    cout<<  n << endl;

    printTillN( n - 1);
}

// print 1 to n

void printTillOne(int n){
    if  (n == 0) return;

    printTillOne( n - 1);

    cout<<  n << endl;
}

// print sum of number n

int sumN(int n){
    if (n == 0) return 0;
    
    return n + sumN( n - 1);
}

// factorial using recurssion

int factorial(int n){
    if ( n== 0) return 1;

    return n * factorial( n - 1);
}

// Fibonacci using recurssion --- LC509

    int fib(int n){
        if ( n == 0 || n == 1) return n;

        return fib(n-1) + fib(n-2);
    }


// Rev string using recurssion  --- LC344

    void reverseHelper(vector<char>& s, int left, int right){
        if ( left >= right ) return;

        swap(s[left], s[right]);

        reverseHelper(s, left + 1, right - 1);
    }


    void revString(vector<char>& s){
        reverseHelper(s, 0, s.size() - 1);
    }


// power of 2 - LC231

bool powTwo(int n){
    if ( n % 2 == 1 ) return false;
    if ( n <= 0 ) return false;
    if ( n == 1 ) return true;

    return powTwo( n / 2);
}


int main() {
    // printTillN(6);

    factorial(3);
    return 0;
}