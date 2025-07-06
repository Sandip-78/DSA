#include<iostream>
#include<vector>
using namespace std;

int profit(vector<int> price){
    
    int bestbuy =price[0] , maxProfit = 0;

    for(int i=0;i<price.size();i++){
        if( price[i] > bestbuy){
            maxProfit = max(maxProfit , price[i] - bestbuy);
        }
        bestbuy = min(price[i],bestbuy);
    }
    return maxProfit;
}

int main(){
    vector<int> a = {7,1,5,6,4};
    cout<<"The maxProfit is : "<<profit(a);
    return 0;
}