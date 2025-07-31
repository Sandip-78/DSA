#include<iostream>
#include<set>
using namespace std;

int main(){
    set<int> st;
    int n=6;
    int a[n]={1,1,2,2,3,3};

    for(int i=0;i<n;i++){
        st.insert(a[i]);
    }

    int index = 0;
    for(auto it : st){
        a[index] = it;
        index++;
    }

    for(int i=0;i<index;i++){
        cout<<a[i]<<" ";
    }
    return 0;
}