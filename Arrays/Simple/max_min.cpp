#include<iostream>
#include<climits>
using namespace std;

int main(){

    int arr[5];
    cout<<"Enter elements : ";

    for(int i=0;i<5;i++){
        cin>>arr[i];
    }

    int smallest = INT_MAX;
    int largest = INT_MIN;
    
    for(int i=0;i<5;i++){
        if(arr[i]<smallest){
            smallest = arr[i];
        }
        // smallest = min(arr[i],smallest); using min function
    }

    for(int i=0;i<5;i++){
        if(arr[i]>largest){
            largest = arr[i];
        }
        // largest = max(arr[i],smallest); using max function
    }

    cout<<"Smallest element is : "<<smallest<<endl;
    cout<<"Largest element is : "<<largest<<endl;
    return 0;
}