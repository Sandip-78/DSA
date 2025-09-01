#include<iostream>
#include <vector>
using namespace std;


int main (){

    vector<int> vec;
    vec.push_back(1);
    vec.push_back(2);
    vec.push_back(1);
    vec.push_back(3);
    vec.push_back(1);
    vec.push_back(2);

    cout<<vec[1]<<endl;
    cout<<vec.size();
    return 0;
}