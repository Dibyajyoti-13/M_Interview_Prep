#include<iostream>
using namespace std;

int main(){
    int n, arr[20];
    cout<<"Enter array size: ";
    cin>>n;
    cout<<"Enter elements: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]==arr[j]){
                cout<<"True";
                return 0;
            }
        }
    }
    cout<<"False";
    return 0;
}