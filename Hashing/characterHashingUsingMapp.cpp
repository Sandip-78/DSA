#include<iostream>
#include<map>
using namespace std;

int main(){

    int n;
    cout<<"Enter n :";
    cin>>n;

    char a[n];

    map<char,int> mpp;
    cout<<"Enter array element : ";
    for(int i=0;i<n;i++){
        cin>>a[i];
        mpp[a[i]]++;
    }

    // for(auto it : mpp){
    //     cout<<it.first<<" -> "<<it.second<<endl;
    // }

    int q;
    cout<<"Enter the no.of searching number : ";
    cin>>q;

    char c;
    for(int i=0;i<q;i++){
        cin>>c;
        cout<<mpp[c];
    }

    return 0;
}