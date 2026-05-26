#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

void fun(vector<int> &vec,int target){
    int i=0,j=vec.size()-1;
    sort(vec.begin(), vec.end());

    while(i<j){
        if((vec[i]+vec[j])==target){
            cout<<vec[i]<<" and "<<vec[j];
            return;
        }
        else if((vec[i]+vec[j]) < target){
            i++;
        }else{
            j--;
        }
    }
}

int main(){

    vector<int> vec={7,11,2,5};
    int target = 9;
    fun(vec,target);
    return 0;
}

// TC : O(nlogn)
// SC : O(1)