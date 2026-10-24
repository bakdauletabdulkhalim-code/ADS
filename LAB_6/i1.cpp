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
    string s;
    cin >> s;
    bsort(s);
    cout << s;
}