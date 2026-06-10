#include <iostream>
#include <vector>
#include <string>
using namespace std;

bool palindrome(string s){
int i = 0, j = s.size()-1;

    while (i <= j){
        if (!isalnum(s[i])){ i++; continue; }
        if (!isalnum(s[j])){ j--; continue; }
        if (tolower(s[i]) != tolower(s[j])) return false;
        i++;
        j--;
    }
    return true;
}

///   daabcbaabcbc

string remOc1( string s, string t){

    for (int j = 0; j<s.size(); j++){
            if (s.substr(j,t.size()) == t){
                s.erase(j,t.size());
                j=0;
            }
    }

return s;
}

string remOc( string s, string part){
    while (s.length() > 0 && s.find(part)<s.length()){
        s.erase(s.find(part),part.length());
    }
    return s;
}


int main () {
     cout<< palindrome("A man, a plan, a canal: Panama")<<endl;
    cout<< remOc("daabcbaabcbc", "abc");

    return 0;
}