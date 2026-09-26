#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    vector<int> a(n);
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    int m;
    cin >> m;
    vector<int> b(m);
    for(int j = 0; j < m; j++){
        cin >> b[j];
    }

    vector<int> merged;
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