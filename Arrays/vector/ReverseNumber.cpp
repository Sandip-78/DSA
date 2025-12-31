#include<iostream>
#include <vector>
using namespace std;

void fun(vector<int>& vec){

    int s = 0,e = vec.size()-1;

    while( s<=e ){
        vec[s] = vec[e];
        s++;
        e--;
    }
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

    for(int i=0;i<vec.size();i++){
        cout<<vec[i]<<" ";
    }

    return 0;
}