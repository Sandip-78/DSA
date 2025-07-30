#include<iostream>
#include<vector>
#include<climits>
using namespace std;

void slargest(vector<int> &v){

    int largest = v[0];

    for(int i=0;i<v.size()-1;i++){
        if(v[i]>largest){
            largest = v[i];
        }
    }

    int sgreat = INT_MIN;
    for(int i=0;i<v.size();i++){
        if(v[i]>sgreat && v[i]!=largest ){
            sgreat = v[i];
        }
    }

    cout<<sgreat;

    // Time complexity = 2n;

}

int main(){

    vector<int> v={1,2,4,7,7,5};
    slargest(v);

    return 0;
}