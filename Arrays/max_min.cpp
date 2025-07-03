#include<iostream>
#include<climits>
using namespace std;

int main(){

    int arr[5];
    cout<<"Enter elements : ";

    for(int i=0;i<5;i++){
        cin>>arr[i];
    }

    int smallest = INT_MAX,s;
    int largest = INT_MIN,l;
    
    for(int i=0;i<5;i++){
        if(arr[i]<smallest){
            smallest = arr[i];
            s=i;
        }
        // smallest = min(arr[i],smallest); using min function
    }

    for(int i=0;i<5;i++){
        if(arr[i]>largest){
            largest = arr[i];
            l=i;
        }
        // largest = max(arr[i],smallest); using max function
    }

    cout<<"Smallest element is : "<<smallest<<" and the index is : "<<s<<endl;
    cout<<"Largest element is : "<<largest<<" and the index is : "<<l<<endl;
    return 0;
}