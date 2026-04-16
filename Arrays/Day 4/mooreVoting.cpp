#include<iostream>
#include<vector>
using namespace std;

void fun(vector<int> &v){
    int cnt = 0;
    int el;
    for(int i=0;i<v.size();i++){
        if(cnt == 0){
            cnt = 1;
            el = v[i];
        }
        else if (v[i] == el) cnt++;
        else cnt--;
    }
    int cnt1=0;
    for(int i=0;i<v.size();i++){
        if(v[i] == el) cnt1++;
    }

    if(cnt1 > (v.size()/2)) cout<<el;
    else{
        cout<<"no majority element";
    }
}

int main(){

    vector<int> v ={2,2,1,1,1,2,2};
    fun(v);
    return 0;
}

// TC : o(n)
// SC : o(1)