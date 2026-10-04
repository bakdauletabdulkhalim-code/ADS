#include <bits/stdc++.h>
using namespace std;
int main(){
    int n, m;
    cin >> n >> m;
    priority_queue<long long, vector<long long>, greater<long long>> q;
    long long sum = 0;
    for(int i = 0; i < n; i++){
        string s;
        cin >> s;
        if(s == "insert"){
            long long x;
            cin >> x;
            if(q.size() < m){
                q.push(x);
                sum += x;
            }
            else if(x > q.top()){
                sum += x - q.top();
                q.pop();
                q.push(x);
            }
        }
        else{
            cout << sum << endl;
        }
    }
}