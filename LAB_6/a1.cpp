#include <bits/stdc++.h>
using namespace std;
void bsort(string& s){
    for(int i = 0; i < s.size() - 1; i++){
        for(int j = 0; j < s.size() - i - 1; j++){
            if(s[j] > s[j+1]){
                swap(s[j], s[j+1]);
            }
        }
    }
}
int main(){
    int n;
    cin>> n;
    string s;
    cin >> s;
    string a = "";
    string b = "";
    for(int i = 0; i < n; i++){
        if(s[i] == 'a' || s[i] == 'e' || s[i] == 'o' || s[i] == 'i' || s[i] == 'u'){
            a += s[i];
        }
        else{
            b += s[i];
        }
    }
    bsort(a);
    bsort(b);
    // sort(a.begin(), a.end());
    // sort(b.begin(), b.end());
    cout << a << b;
}