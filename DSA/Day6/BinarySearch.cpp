#include<iostream>
#include<vector>
using namespace std;

int binarySearch(vector<int> &arr,int n){
    int st = 0, end = arr.size()-1;
    int mid = st + (end - st) / 2;

    while(st <= end){
        if(arr[mid] == n){
            return mid;
        }
        else if( arr[mid] > n){
            end = mid -1;
        }
        else{
            st = mid + 1;
        }

        mid = st + (end - st) / 2;
    }

    return -1;
}

int main(){

    vector<int> a = {-1,0,1,2,3,4,5};
    int target = 4;

    int index = binarySearch(a,target);
    cout<<"Target index is "<<index;
    return 0;
}