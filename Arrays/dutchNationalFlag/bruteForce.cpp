#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> v = {0,1,2,0,1,2};
    vector<int> zero;
    vector<int> one;
    vector<int> two;
    int low =0;
    while(low < v.size()){
        if(v[low] == 0){
            zero.push_back(v[low]);
            low++;
        }else if(v[low] ==1){
            one.push_back(v[low]);
            low++;
        }else{
            two.push_back(v[low]);
            low++;
        }
    }

   int index = 0;

    for(int x : zero){
        v[index++] = x;
    }

    for(int x : one){
        v[index++] = x;
    }

    for(int x : two){
        v[index++] = x;
    }

    for(int x : v){
        cout<<x<<" ";
    }

    
    return 0;
}

// TC : O(n)
// SC : O(n)
// or we can count the count of zeros, ones and twos and then over write this in the main vector 