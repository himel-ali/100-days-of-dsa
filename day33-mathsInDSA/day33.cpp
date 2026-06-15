#include <bits/stdc++.h>
using namespace std;


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

int main() {



    return 0;
}