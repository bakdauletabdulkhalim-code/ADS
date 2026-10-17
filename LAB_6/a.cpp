#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
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
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
    cout << a << b;

}