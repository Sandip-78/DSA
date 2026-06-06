#include <iostream>
using namespace std;

int main() {
    int a[5] = {4, 1, 3, 2, 5};
    int n = sizeof(a) / sizeof(a[0]);

    for(int i=0;i<n-1;i++){
        int si = i;
        for(int j=i+1;j<n;j++){
            if(a[j]<a[si]){
                si = j;
            }
        }
        swap(a[i],a[si]);
    }

    for(auto x: a){
        cout<<x<<" ";
    }
    return 0;
}