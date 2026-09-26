#include <bits/stdc++.h>
using namespace std;
int main(){
    int n, k;
    cin >> n >> k;
    deque<string> dq;
    for(int i = 0; i < n; i++){
        string s;
        cin >> s;
        dq.push_back(s);
    }
    for(int i = 0; i < k; i++){
        dq.push_back(dq.front());
        dq.pop_front();
    }
    for(string ans : dq){
        cout << ans << " ";
    }
}