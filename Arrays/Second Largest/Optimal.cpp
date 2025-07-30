#include<iostream>
#include<vector>
using namespace std;

void slargest(vector<int> &v){

    int greatest = v[0], sgreatest = -1; //assuming vector contains only postive value

    for(int i=0;i<v.size();i++){
        if(v[i] > greatest){
            sgreatest = greatest;
            greatest = v[i];
        }else if( v[i] < greatest && v[i]>sgreatest){
            sgreatest=v[i];
        }
    } 

    cout<<sgreatest;

    // Time complexity = n;

}

int main(){

    vector<int> v={1,2,4,7,7,5};
    slargest(v);

    return 0;
}