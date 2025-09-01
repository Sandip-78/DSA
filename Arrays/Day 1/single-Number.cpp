#include<iostream>
#include<vector>
using namespace std;

void single(vector<int> &arr){
    int ans = 0;
    for(int i=0;i<arr.size();i++){
        ans = ans^arr[i]; 
    }
    cout<<ans;
}
int main(){

    vector<int> arr={1,2,1,2,3,4,4,5,5};

    single(arr);
    return 0;
}