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


int main () {
     cout<< palindrome("A man, a plan, a canal: Panama");


    return 0;
}