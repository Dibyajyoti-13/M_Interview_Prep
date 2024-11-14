#include<iostream>
#include<algorithm>
using namespace std;

bool anagram_check(string a, string b){
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
    if(a == b) return 1;
    return 0;
}
int main(){
    string s1, s2;
    cout << "Enter first string: ";
    getline(cin, s1);
    cout << "Enter second string: ";
    getline(cin, s2);
    cout << (anagram_check(s1, s2)?"True":"False");
    return 0;
}