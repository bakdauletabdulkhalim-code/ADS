#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    vector<int> a(t);
    for(int i = 0; i < t ;i++){
        cin >> a[i];
    }
    int n, m;
    cin >> n >> m;
    unordered_map<long long, pair<int, int>> pos;
    pos.reserve(n*m*2);
    for(int i =0 ; i < n;i ++){
        for(int j = 0; j < m ; j ++){
            long long x;
            cin >> x;
            pos[x] = {i, j};
        }
    }
    for(int num : a){
        if(pos.find(num) != pos.end()){
            cout << pos[num].first << " " << pos[num].second << "\n";
        }
        else{
            cout << -1 <<"\n";
        }
    }
}