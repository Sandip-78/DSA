#include<iostream>
#include <vector>
using namespace std;

void fun(vector<int>& num){

    int ans=0;
    for(int val : num ){
        ans = ans ^ val;
    }

    cout<<ans;

}

int main (){

    vector<int> vec;
    vec.push_back(1);
    vec.push_back(2);
    vec.push_back(1);
    vec.push_back(3);
    vec.push_back(1);
    vec.push_back(2);

    fun(vec);
    return 0;
}