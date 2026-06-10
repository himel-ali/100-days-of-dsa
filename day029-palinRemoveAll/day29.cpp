#include <iostream>
#include <vector>
#include <string>
using namespace std;


bool palindrome(string s){
     for (int i = 0; i < s.size(); i++) {
        s[i] = tolower(s[i]);
    }

    for (int i=0, j = s.size()-1; i<=j; ){
        if (isalpha(s[i])){ i++; continue;}
        if (isalpha(s[j])){ j--; continue;}


        if (s[i] != s[j]){
            return false;
        }
        i++;
        j--;       
    }
    return true;
}


int main () {
     cout<< palindrome("A man a plan a canal Panama");


    return 0;
}