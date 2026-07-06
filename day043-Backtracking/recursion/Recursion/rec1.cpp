#include <bits/stdc++.h>
using namespace std;

void pNum(int n, int m){
    if(n>m){
        return;
    }

    cout<< n << " ";
    pNum( n+1, m);
}

void pNumr(int n, int m){
    if(n>m){
        return;
    }
    pNumr( n+1, m);
    cout<< n << " ";
}

// sum of array element 

int sumArr (vector<int> nums, int n){
    if (n>=nums.size()){
        return 0;
    }
    return nums[n] + sumArr(nums, n + 1);
}

// Rev string
string revString(string str, int n, int m){
    if(n>m){
        return "";
    }
    return revString(str, n + 1, m) + str[n];
}


// factorial

int fact(int n){
    if( n == 0 || n == 1){
        return 1;
    }
    return n * fact(n-1);
}


long long pow(long long base, long long exp, long long mod){

    long long res = 1;
        for (; exp > 0; exp /= 2){
            if(exp % 2 == 1){
                res = (res* base) % mod;
            }
            base =(base* base) % mod;
        }
        return res;
    }

long long pow(long long base, long long exp, long long mod){
        if ( exp == 0) return 1;

        if(exp&1){
            return (base * pow(base, exp - 1, mod)) % mod;
        }else{
            long long half = pow(base, exp/2, mod);
             return (half * half) % mod;
        }
}


int goodNum ( long long n){

   long long mod = 1e9 + 7;

    long long evenCount = (n + 1) / 2;  
    long long oddCount  = n / 2;

    return (pow(5, evenCount, mod) * pow(4, oddCount, mod)) % mod;
}




int main (){
    pNum(1,5);
    cout<<endl;
    pNumr(1,5);
    cout<<endl;

    vector<int> num = {1,2,3,6,6,6,4,5};
    cout<< sumArr(num, 0)<<" "<< endl;
    cout<< revString("Hello", 0, 5) << endl;
    cout<< fact(10) << endl ;

return 0;

}