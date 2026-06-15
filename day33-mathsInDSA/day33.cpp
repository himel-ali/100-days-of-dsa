#include <bits/stdc++.h>
using namespace std;



// Sieve OF Eratosthenes
int countPrime (int n){
    vector <bool> isPrime (n+1, true ); 
    int count = 0;

     for (int i = 2; i * i <= n; i++) {
        if (isPrime[i]) {
            count++;
            for (int j = i * i; j <= n; j += i) {
                isPrime[j] = false;
            }
        }
    }
    return count;
}





// Digits in Number 

int dgtInNum(int n){
    int digit = 0;

    while (n>0){
        n/=10;
        digit++;
    }
    return digit;
}

int main() {
    cout<< dgtInNum(3586);



    return 0;
}