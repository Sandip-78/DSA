#include<iostream>
#include<climits>
using namespace std;

int main(){

    int n=5;
    int a[5]={1,2,3,4,5};

    int maxSum = INT_MIN;
    for(int i=0;i<n;i++){
        int currentSum = 0;
        for(int j=i;j<n;j++){
            currentSum += a[j];
            maxSum = max(currentSum,maxSum);
        }
    }

    cout<<"Maximum subarray sum is : "<<maxSum;
    return 0;
}