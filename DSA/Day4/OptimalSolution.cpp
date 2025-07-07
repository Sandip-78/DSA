#include<iostream>
#include<vector>
using namespace std;

int container(vector<int> con){
    int n = con.size();
    int i = 0 , j = n-1,w,h,area,maxWater=0;

    while(i < j){
        w = j - i;
        h = min(con[i],con[j]);
        area = w * h;
        maxWater = max(maxWater,area);
        if(con[i] < con[j]){
            i++;
        }else{
            j--;
        }
    }
    return maxWater;
}

int main(){

    vector<int> con = {1,8,6,2,5,4,8,3,7};
    cout<<"Max water container : "<<container(con);
    return 0;
}