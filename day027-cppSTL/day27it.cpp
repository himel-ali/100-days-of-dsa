#include <bits/stdc++.h>
using namespace std;

int main (){

    map<int, string> m;
    m[1] = "Himel";
    m[2] = "Ali" ;
    m[3] = "Jishan" ;
    m[4] = "Jishu" ;

    // for (auto it = m.begin(); it != m.end(); it++){
    //     cout << it->first << " ";
    //     cout << it->second << " ";
    // }


    for (auto it = m.rbegin(); it != m.rend() ; it++){
        cout<< it -> first<< " ";
        cout<< it -> second<< " ";
    } 


 
    return 0;
}