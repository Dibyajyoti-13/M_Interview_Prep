#include<iostream>
using namespace std;
void palin_check(string s){
    string forward = "", backward = "";
    int n = s.size()/sizeof(char);

    for(int i = 0; i < n; i++){
        if(isalpha(s[i])) forward += tolower(s[i]);
        if(isalpha(s[n - i - 1])) backward += tolower(s[n - i - 1]);
    }

    if(forward == backward) cout << "True";
    else cout << "False";
}
int main(){
    string s;
    cout << "Enter string: ";
    getline(cin, s);
    palin_check(s);
    return 0;
}