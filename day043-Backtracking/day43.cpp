#include <bits/stdc++.h>
using namespace std;

vector<int> pS(vector<int> arr,vector<int> ans, int i){
    if(i == arr.size()) return ans;

    ans.push_back(arr[i]);
    return pS(arr, ans, i + 1);

    ans.pop_back();
    return pS(arr, ans, i + 1);

}


int main () {



    return 0;
}