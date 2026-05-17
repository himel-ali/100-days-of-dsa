#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
using namespace std;

int maxArea(vector<int>& height){
    int maxArea = 0;
    int curArea = 0;
    for (int i = 0 ; i <height.size(); i++){
        for (int j = 1; j<= height.size()-1; j++){
            curArea = min(height[i], height[j])*(j-i);
            maxArea = max (maxArea, curArea);
        }
    }return maxArea;
}

int maxAreaOpti(vector<int>& height){
    int maxArea = 0;
    int curArea = 0;
    for (int i = 0, j = height.size()-1 ; i <j ; ){
        curArea = min(height[i], height[j])*(j-i);
        maxArea = max (maxArea, curArea);
        if (height[i]> height[j]){
            j--;
        }else{
            i++;
        }
    }return maxArea;
}

int main(){
    vector<int> height = {1,8,6,2,5,4,8,3,7};
    cout << maxAreaOpti(height);

    return 0;
}