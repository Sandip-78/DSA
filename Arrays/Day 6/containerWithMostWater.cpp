#include<iostream>
#include<vector>
using namespace std;

void fun(vector<int> &height){
    int mw = 0;
    for(int i=0;i<height.size();i++){
        for(int j=i+1;j<height.size();j++){
            int w= j-i;
            int h=min(height[i],height[j]);
            int area = w*h;
            mw = max(mw,area);
        }
    }
    cout<<mw;
}

int main(){

    vector<int> v={1,8,6,2,5,4,8,3,7};
    fun(v);
    return 0;
}

// time complexity = o(n2) -> the code give TLE
// space complexity = o(1)