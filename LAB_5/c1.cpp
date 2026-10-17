#include <bits/stdc++.h>
using namespace std;
int main(){
    int n, m;
    cin >> n >> m;
    priority_queue<int> q;
    for(int i = 0; i < n; i++){
        int x;
        cin >> x;
        q.push(x);
    }
    long long ans = 0;
    while(m--){
        long long s = q.top();
        q.pop();
        ans += s;
        if(s > 0){
            q.push(s-1);
        }
    }
    cout << ans;
}