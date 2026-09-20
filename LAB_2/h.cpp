#include <bits/stdc++.h>
using namespace std;
int main(){
    int a;
    cin >> a;
    vector<int> v(a);
    for(int i = 0; i < a; i++){
        cin >> v[i];
    }
    int current = v[0];
    int best = v[0];
    for(int i = 1; i < a; i++){
        current = max(v[i], current + v[i]);
        best = max(best, current);
    }
    cout << best;
    return 0;
}