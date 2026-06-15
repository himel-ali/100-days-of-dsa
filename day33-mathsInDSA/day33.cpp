#include <bits/stdc++.h>
using namespace std;

    bool isPrime(int n){
        
        if(n<=1){
            return false;
        }
    for (int i = 2; i<n/2; i++){
            if(n%i==0){
                return false;
            }
        }
        return true;
    }

int countPrime (int n){
    for (int i = 2; i<n; i++){


    }


}

int main() {



    return 0;
}