#include <iostream>
#include <string>
using namespace std;

bool checkInc (string s1, string s2){

    int s1Feq[26]= {0};

    for (int i = 0; i<s1.length() ; i++){
        s1Feq[s1[i]-'a']++;
    }

    int windowSize = s1.length();

    for(int i=0; i<s2.length(); i++){
        int s2Idx = i;
        int windowIdx = 0;
        int s2Feq [26] ={0};

        while (windowIdx< windowSize){
            s2Feq[s2[s2Idx]-'a']++;
            s2Idx++;
            windowIdx++;
        }

        if (equal(s1Feq, s1Feq+26, s2Feq)){
            return true;
        }
        
    }
    return false;
}





int main(){



    return 0;
}