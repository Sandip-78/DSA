#include<iostream>
#include<vector>
using namespace std;

int main(vector<int> a){
    frequency = 0 , ans = 0;

    for(int i=0;i<a.size();i++){
        if(frequency == 0){
            ans = a[i];
        }
        if( ans == a[i] ){
            frequency++;
        }
        else{
            frequency--;
        }
    }
}


int main(){

    vector<int> a = {1, 2, 2, 1, 1, 1};
     cout << "The majority element is : " << major(a);

    return 0;
}