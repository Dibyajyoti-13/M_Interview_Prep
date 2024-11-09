#include<iostream>
using namespace std;

void reverse(int arr[],int n){
    for(int i=0;i<n/2;i++){
        int temp=arr[n-i-1];
        arr[n-i-1]=arr[i];
        arr[i]=temp;
    }
}

int main(){
    int n, arr[20];
    cout<<"Enter array size: ";
    cin>>n;
    cout<<"Enter elements: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    reverse(arr, n);
    cout<<"Reversed Array: "<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}