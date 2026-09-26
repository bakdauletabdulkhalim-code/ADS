#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    vector<int> v(n);
    for(int i = 0; i < n; i++){
        cin >> v[i];
    }
    int curr = v[0];
    int best = v[0];
    for(int i = 1; i < n; i++){
        curr = max(v[i], curr + v[i]);
        best = max(curr, best);
    }
    cout << best;
}