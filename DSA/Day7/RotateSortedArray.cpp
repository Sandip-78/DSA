#include<iostream>
#include<vector>
using namespace std;

int binarySearch(vector<int> &a,int key){
    int st =0, end = a.size()-1;

    while(st<=end){
        int mid = st + (end - st)/2;

        if(a[mid] == key) return mid;
        if(a[mid] >= a[st]){
            if(a[st]<=key && key<=a[mid]){
                end = mid -1;
            }else{
                st = mid + 1;
            }
        }else{
            if(a[mid]<=key && key<=a[end]){
                st = mid +1;
            }else{
                end = mid - 1;
            }
        }
    }

    return -1;
}

int main(){

    vector<int> a = {4,5,6,7,0,1,2};
    cout<<binarySearch(a,5);
    
    return 0;
}