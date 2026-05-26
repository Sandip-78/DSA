#include<iostream>
#include<vector>
using namespace std;

int main(){
    
    vector<int> vec = {7,5,11,2};

    int target = 9;
    for(int i=0;i<vec.size();i++){
        for(int j=1;j<vec.size();j++){
            if(vec[i]+vec[j]== target){
                cout<<"Elements found "<<vec[i]<<" and "<<vec[j];
            }
        }
    }

    return 0;
}

// TC : O(n)
// SC : O(1)