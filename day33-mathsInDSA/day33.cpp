#include <bits/stdc++.h>
using namespace std;



// Sieve OF Eratosthenes
int countPrime (int n){
    vector <bool> isPrime (n+1, true ); 
    int count = 0;

     for (int i = 2; i  <= n; i++) {
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



// ArmStrong Num

bool armStrongNum(int n){
    int sum = 0; 
    int digit = 0;
    int ori = n; 

    while(n>0){
        digit = n%10;
        sum+= digit*digit*digit;
        n/=10;
    }
    if(sum == ori){
        return true;
    }
    return false;
}



// HCF / GCD

int gcd(int a, int b){
    int gen =1;
    for (int i = 1; i<min(a,b);i++){
        if(a%i == 0 && b%i == 0){
            gen=i;
        }
    }
    return gen;
}

// Euclid's Algo








int main() {
    cout<< armStrongNum(111);



    return 0;
}