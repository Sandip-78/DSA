#include<iostream>
#include<vector>
using namespace std;

int binarySearch(vector<int> &a){
    int st=1,end = a.size()-2;

    while(st<=end){
        int mid = st + (end - st)/2;

        if(a[mid-1]< a[mid] && a[mid]>a[mid+1]){
            return mid;
        }else if(a[mid-1] < a[mid]){
            st = mid +1;
        }else{
            end = mid -1;
        }
    }
    return -1;
}

int main(){

    vector<int> a = {2,3,4,9,5,6,7,1};
    cout<<binarySearch(a);
    return 0;
}