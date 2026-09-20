#include <bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    vector<long long> a(n);
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    int m;
    cin >> m;
    vector<long long> b(m);
    for(int i = 0; i < m; i++){
        cin >> b[i];
    }

    vector<long long> merged;
    merged.reserve(n + m);
    for(auto x : a){
        merged.push_back(x);
    }
    for(auto x : b){
        merged.push_back(x);
    }
    sort(merged.begin(), merged.end());
    for(int i = 0; i < merged.size(); i++){
        if(i){
            cout << " ";
        }
        cout << merged[i];
    }
}