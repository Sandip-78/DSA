#include<iostream>
#include<vector>
using namespace std;

vector<int> product(vector<int> nums) {
    int n = nums.size();

 
    vector<int> prefix(n, 1);
    vector<int> suffix(n, 1);
    vector<int> ans(n, 1);

 
    for (int i = 1; i < n; i++) {
        prefix[i] = prefix[i - 1] * nums[i - 1];
    }


    for (int i = n - 2; i >= 0; i--) {
        suffix[i] = suffix[i + 1] * nums[i + 1];
    }


    for (int i = 0; i < n; i++) {
        ans[i] = prefix[i] * suffix[i];
    }

    return ans;
}

int main() {
    vector<int> a = {1, 2, 3, 4};
    vector<int> result = product(a);
    cout << "The Product array is : ";
    for (int i = 0; i < result.size(); i++) {
        cout << result[i] << " ";
    }
    cout << endl;
    return 0;
}
