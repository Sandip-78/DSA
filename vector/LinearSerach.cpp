#include<iostream>
#include <vector>
using namespace std;

bool fun(vector<int>& num,int key){

    for(int val : num){
        if(val == key){
            return 1;
        }
    }

    return 0;

}

int main (){

    vector<int> vec;
    vec.push_back(1);
    vec.push_back(2);
    vec.push_back(3);
    vec.push_back(4);
    vec.push_back(5);
    vec.push_back(6);

    cout<<"Element found "<<fun(vec,9);
    return 0;
}