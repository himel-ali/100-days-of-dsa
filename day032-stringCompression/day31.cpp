#include <bits/stdc++.h>
using namespace std;


//LC443 String compresion

int compre(vector<char>& chars){
    
    for (int i = 0 ;i< chars.size(); i++ ){
        int occur = 1;

        for (int j=i;j + 1 < chars.size() && chars[j]==chars[j+1];j++){
                occur++;   
        }
        chars.push_back(chars[i]);
        if(occur>1){
        chars.push_back(occur);
        }
    }
}




int compress(vector<char>& chars){
    int idx = 0 ;
    int write = 0;
    
    while (idx < chars.size()){
        int occur = 1;

        while(idx + 1 < chars.size()  && chars[idx]==chars[idx+1]){
            occur++;
            idx++;
        }
        idx++;
        if (occur == 1){
            chars[write]=chars[idx];
            write++;
        }else {
            chars[write]= chars[idx];
            string str = to_string(occur);
            for (char dgt : str) chars[write++]=dgt;
        }
    }
}



int main() {
    
    
    return 0;
}