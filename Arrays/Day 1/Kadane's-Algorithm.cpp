#include<iostream>
#include<climits>
using namespace std;

int main(){

    int arr[5]={1,2,3,4,5};

    int cs = 0 , maxsum = INT_MIN;

   for(int i=0;i<n;i++){
        cs += arr[i];
        maxsum = max(cs,maxsum);
        if(cs < 0){
            cs = 0;
        }
   }

   cout<<maxsum;
    return 0;
}