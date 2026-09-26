#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    vector<string> ans;
    for(int i = 0; i < n; i++){
        string s;
        cin >> s;
        if(ans.empty() || ans.back() != s){
            ans.push_back(s);
        }
    } 
    cout << ans.size() << endl;
    for(string res : ans){
        cout << res << endl;
    }
}