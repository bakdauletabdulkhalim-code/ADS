#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    vector<int> v(n);
    for(int i = 0; i < n; i++){
        cin >> v[i];
    }
    int current = v[0];
    int best = v[0];
    for(int i = 1; i < n; i++){
        current = max(v[i], current + v[i]);
        best = max(best, current);
    }
    cout << best;
}