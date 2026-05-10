#include <iostream>
using namespace std;

// FUNCTION

//Function syntax ------>

// returnType printHello(typeOfParameter parameter1, ypeOfParameter parameter2 ) {

//     do someting

// }

// Parameters and arguments 
// 1. PARAMETERS — variables in the function definition
// 2. ARGUMENTS — actual values you pass when calling the function
// 3. LITERALS — fixed, hardcoded values written directly in code
// factorial(5);    // ← 5 is a LITERAL (hardcoded number)
// factorial(n);    // ← n is NOT a literal (it's a variable)


// Function in Memory --->

// Stack-----> layers of books, functions are stored in stack memory. evrything in stack memory is called one by one after removing the first book second book\function and reaching out to the book\function that we need.

// Heep -----> 



// Pass by value --------->
                                           

//Examples / Practice --------->
void printHello() {

    cout << "Hello World"<<endl;

}

//Sum of 2 nums
int sum  (int a, int b){
    int sum = a + b;
    return a+ b;
}

// Minumum  of 2 numbers
int minNum(int a, int b){    
        if (a > b){
            return b;
        }else {
            return a;
        }
}

// Calculate sum of numbers from 1 to N

int sumN(int n){
    int sum = 0;
        for ( int i = 1; i<=n; i++){
            sum += i;
        }
        return sum;
}

// N factorial

int factorial(int n){
    int fact = 1;
    for ( int i = 1; i <= n; i++){
        fact *= i;
    }
    return fact;

}

// int calcDigit( int a, int b){
//     int sum = 0;
//     for ( int i = 0; i< b; i++ ){
//         int p = 10;
//         int k = a % p;
//         sum += k;
//         p+=10;
//     }
//     return sum;
// }

int calcDigit ( int a){
    int sum = 0;
    for (; a>0; a /= 10){
        sum += a % 10;
    }
    return sum;
}

// Calculate nCr binomial coefficient for n & r

int nCr(int n, int r){
    return factorial(n)/ factorial(r)*factorial(n-r);
}


// Prime or not
bool isPrime (int n){
    bool isPrime = true;
    for (int i = 2; i<n; i++){
        if (n % i == 0){
            isPrime = false;
            break;
        } 
    }
    return isPrime;
}

// Print all prime numbers from 2 to n

void primesTill(int n){
    for ( int i = 2; i <= n ; i++){
        if (isPrime(i)){
            cout << i<< " ";
        }
    }
}


// WAF for Fibonacci

void fibonacci(int n){
    int seclastn = 0;
    int lastn = 1; 
    
    cout << seclastn <<" "<< lastn<< " ";
    for (int i = 2; i<n; i++){
        int cur = seclastn + lastn;
        cout<< cur<< " ";
        seclastn = lastn;
        lastn = cur;
    }
}



int main () {

    // printHello() ;

    // cout << sum(12, 13)<<endl; // 12 and 13 are arguments of function

    // cout << minNum(34,54)<<endl; // 34 and 54 are arguments of function or literals( which will never change ).

    // cout << sumN( 10 )<< endl; 
    
    // cout << factorial( 10 )<< endl; 

    // cout << calcDigit( 145)<< endl;

    // cout << nCr(5, 2)<< endl;

    // cout << isPrime ( 12 )<< endl; 
    
    // primesTill(20);

    fibonacci(10);




    return 0;
}