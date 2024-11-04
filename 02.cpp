#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    int n, m, diff, min = INT16_MAX;
    vector<int> arr;
    cout << "Enter length: ";
    cin >> n;
    cout << "Enter values: ";
    for(int i=0;i<n;i++){
        cin >> m;
        arr.push_back(m);
    }
    cout<<"No. of Students: ";
    cin>>m;

    sort(arr.begin(), arr.end());
    for(int i=0;i<n-m+1;i++){
        diff=arr[i+m-1]-arr[i];
        // cout<<arr[i+m-1]<<"-"<<arr[i]<<"="<<diff<<endl;
        if(min>diff) min=diff;
    }
    cout<<min;
    return 0;
}