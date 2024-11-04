/*find the maximum and the minimum element of the
 array using the minimum number of comparisons.*/
#include<iostream>
using namespace std;

int main(){
    int n, i;
    int arr[20];
    int min_val, max_val;
    cout << "Enter length: ";
    cin >> n;
    cout << "Enter values: ";
    for(i=0;i<n;i++){
        cin >> arr[i];
    }
    
    // min_val = max_val = arr[0];
    // for(int i=1;i<n;i++){
    //     min_val=min(min_val,arr[i]);
    //     max_val=max(max_val,arr[i]);
    // }

    if(n%2==0){
        min_val = min(arr[0], arr[1]);
        max_val = max(arr[0], arr[1]);
        i=2;
    } 
    else {
        min_val = max_val = arr[0];
        i=1;
    }

    for (; i<n; i+=2) {
        int local_min = min(arr[i], arr[i + 1]);
        int local_max = max(arr[i], arr[i + 1]);
        min_val = min(min_val, local_min);
        max_val = max(max_val, local_max);
    }

    cout<<"Maximum number: "<<max_val<<endl;
    cout<<"Minimum number: "<<min_val<<endl;
    return 0;
}