#include<iostream>
using namespace std;

int main(){

    int arr[5]={1,2,3,4,5};

    for(int st = 0;st<5;st++){
        for(int end = st;end<5;end++){
            for(int i=st;i<=end;i++){
                cout<<arr[i];
            }
            cout<<" ";
        }
        cout<<endl;
    }
    return 0;
}