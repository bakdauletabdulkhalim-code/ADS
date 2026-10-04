#include <bits/stdc++.h>
using namespace std;
int main(){
    int n, k;
    cin >> n >> k;
    priority_queue<long long> q;
    for(int i = 0; i < n; i++){
        long long m;
        cin >> m;
        q.push(m);
    }
    long long answer = 0;
    while(k--){
        long long x = q.top();
        q.pop();
        answer += x;
        if(x > 1){
            q.push(x - 1);
        }
    }
    cout << answer;
}