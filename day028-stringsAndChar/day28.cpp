#include <iostream>
#include <vector>
#include <string>
using namespace std;


bool palindrome(string s){
     for (int i = 0; i < s.size(); i++) {
        s[i] = tolower(s[i]);
    }

    for (int i=0, j = s.size()-1; i<=j; i++, j--){
        if (s[i] != s[j]){
            return false;
        }
       
    }
    return true;
}




int main () {
     cout<< palindrome("racecaR");

    // Character Array --->

    // // char string[] = { 'H', 'i','m','e', 'l', '\0'};
    // // char str[] = "Himel";

    // // cout << string << endl;
    // // cout << str << endl;


    // // // char strinp [512];
    // // // cout << "Enter String Input : ";
    // // // cin >> strinp ;
    // // // cout<< strinp<< endl;


    // // // cin.getline(cahr arr name, lenght, delim?)
    
    // // char strinp [512]; 
    // // cout << "Enter the String input : ";
    // // cin.getline(strinp, 512, '.');

    // // cout<< "Output : " << strinp<< endl;


    // /// Strings in CPP --->
    // string str = "My name is Himel Ali";
    // string str2 = "I love running.";
    // cout<< str<< endl;
    // str = "I am reading a Book.";
    // cout <<  str + " " + str2 << endl;

    // // Reversing a string ---

    // string revst = "I am Ali.";

    // for (int i =0, j= revst.size()-1; i<j ; i++){
    //     swap(revst[i], revst[j]);
    //     j--;
    // }
    // cout << "output : "<< revst;


    // 
    // reverse(revst.begin(), revst.end());



   





    
    return 0;
}