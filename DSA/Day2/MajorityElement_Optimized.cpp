#include<bits/stdc++.h>
using namespace std;

int major(vector<int> a){

    int n = a.size();

    sort(a.begin() , a.end());

    int frequency = 1;
    int ans=a[0];
    for(int i=1;i<a.size();i++){
        if(a[i] == a[i-1]){
            frequency++;
        }else{
            frequency = 1;
            ans = a[i];
        }
        if(frequency > (n/2)){
            return ans;
        }
    }
    
}

int main(){

    vector<int> a = {1, 2, 2, 1, 1, 1};
     cout << "The majority element is : " << major(a);

    return 0;
}