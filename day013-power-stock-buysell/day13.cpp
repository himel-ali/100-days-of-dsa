#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
using namespace std;

// Binary Exponentiation --- Power x^n 
double pow(double x, int n){
    double res = 1;
    bool isNegative = false;

    

    if (n < 0) {
        isNegative = true;
        n = -n;  
        }




    for (; n > 0; n /= 2) {
        if (n % 2 == 1) {
            res *= x;
        }
        x *= x;
    }

    if (isNegative) {
        return 1.0 / res;  
    }
    return res;
}

// Stock Buy and Sell
int stock(vector<int>& price){
    int bestbuy = price[0];
    int maxprofit = 0;
    for (int i = 1; i< price.size(); i++){
        if (price[i]>bestbuy){
            maxprofit = max(maxprofit, price[i]-bestbuy);
        }
        bestbuy = min(bestbuy, price[i]);
    }
    return maxprofit;
}




int main (){
    cout << pow(-100 , 2147483648)<<endl;



    return 0;
}