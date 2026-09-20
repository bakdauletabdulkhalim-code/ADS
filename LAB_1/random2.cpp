#include <bits/stdc++.h>
using namespace std;
// sbbsbss s 2
// YES
int main(){
    string s;
    char st;
    int n;
    cin >> s >> st >> n;
    int count = 0;
    for(int i = 0; i < s.size(); i++){
        if(s[i] == st){
            count++;
        }
    }
    if(count >= n){
        cout << "YES";
    }
    else{
        cout << "NO";
    }
}