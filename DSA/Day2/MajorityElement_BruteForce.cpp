#include<iostream>
#include<vector>
using namespace std;

int major(vector<int> num) {
    int n = num.size();

    for(int i = 0; i < n; i++) {
        int frequency = 0;
        for(int j = 0; j < n; j++) {
            if(num[i] == num[j]) {
                frequency++;
            }
        }
        if(frequency > (n / 2)) {
            return num[i];
        }
    }
    return -1;
}

int main() {
    vector<int> a = {1, 2, 2, 1, 1, 1};
    cout << "The majority element is : " << major(a);
    return 0;
}
