#include <iostream>
#include <string>
#include <algorithm>
using namespace std;




string revWord(string s){
    string ans= "";
    reverse(s.begin(), s.end());

   
    for (int i = 0; i<s.length(); i++){
    string word = "";

    while (i<s.length() && s[i]!=' '){
        word+= s[i];
        i++;
    }
    reverse(word.begin(), word.end());
    
    if (word.length()>0 ){
        ans+= " "+word;
    }
    }
    return ans;

}


int main () {
    cout<< revWord("the sky is blue");



    return 0;
}