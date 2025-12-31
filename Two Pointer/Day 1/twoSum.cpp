#include<iostream>
using namespace std;

int main(){
    int n = 4;
    int a[n] = {2,7,11,15};
    int target = 9;
    int low = 0;
    int high = n-1;    
    while(low<high){
        int sum = a[low] + a[high];
        if(sum == target){
            cout<<low<<" "<<high;
            break;
        }
        else if(sum < target){
            low++;
        }
        else{
            high--;
        }
    }
    return 0;
}