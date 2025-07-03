#include<iostream>
#include<climits>
using namespace std;

int main(){

    int n=5;
    int a[5]={1,2,3,4,5};

    
    int maxSum = INT_MIN;
    int cs =0;
    
    for(int st=0;st<n;st++){
        cs += a[st];
        maxSum = max(cs,maxSum);
        if( cs < 0) cs = 0;
    }

    cout<<"Maximum of sub array is : "<<maxSum;
    return 0;
}