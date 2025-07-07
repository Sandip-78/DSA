#include<iostream>
#include<vector>
using namespace std;

int container(vector<int> con){
    int n = con.size();
    int w,maxWater = 0,h,area;

    for(int i = 0;i<n;i++){
        for(int j=i+1;j<n;j++){
            w = j -i ;
            h = min(i,j);
            area = w * h;
            maxWater = max(maxWater , area);
        }
    }
    return maxWater;
}

int main(){

    vector<int> con = {1,8,6,2,5,4,8,3,7};
    cout<<"Max water container : "<<container(con);
    return 0;
}