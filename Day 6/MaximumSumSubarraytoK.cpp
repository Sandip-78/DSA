#include<iostream>
using namespace std;

int sum(int a[],int n){
    int low = 0;
    int high = 1;

    int sum = 0;
    int result = 0;
    for(int i=0;i<=high;i++){
        sum = sum + a[i];
    }

    while(high<n){
        result = max(sum,result); // 300 500
        low++; // 1 2
        high++;// 2 3
        if(high == n)  break;
        sum = sum - a[low-1]; // 200 
        sum = sum + a[high]; 
    }

    return result;
}

int main(){
    int a[4] = {100,200,300,400};
    cout<<sum(a,4);
    return 0;
}