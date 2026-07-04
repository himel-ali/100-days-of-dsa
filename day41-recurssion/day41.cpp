#include <bits/stdc++.h>
using namespace std;

// normal factorial 

int nFact(int n){

    if (n == 0){
        return 1;
    }
    int fac = 1;

    for ( int i = 1; i<=n ; i++){
        fac *= i;
    }
    return fac;
}

// recurssion Fact 

int rFact(int n){

    if(n == 0 || n == 1){
        return 1;
    }

   return n* rFact(n-1);
}    


// SUm of N Number 

int sumN(int n){
    if ( n == 0 ){
        return 0;
    }
    return n + sumN( n - 1);
}



int main() {

    cout<< rFact(4)<<endl;
    cout<< sumN(4)<<endl;

    return 0;
}