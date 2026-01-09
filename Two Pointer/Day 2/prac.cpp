#include<iostream>
#include<vector>
using namespace std;

 int removeDuplicates(vector<int>& a) {
        int i=0,j=1,count=1;
        while(j<a.size()){
            if(a[j]!=a[j-1]){
                i++;
                count++;
                a[i] = a[j];
            }
            j++;
        }

        return count;
    }

int main(){

    vector<int> a = {0,0,1,1,1,2,2,3,3,4};
    cout<<removeDuplicates(a);
    return 0;
}