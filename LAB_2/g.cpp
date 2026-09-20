#include <bits/stdc++.h>
using namespace std;
int main(){
    int n, m;
    cin >> n >> m;
    vector<string> v(n);
    for(int i = 0; i< n; i++){
        cin >> v[i];
    }
    m = m % n;
    for(int i = m; i < n; i++){
        cout << v[i] << " ";
    }
    for(int i = 0; i < m; i++){
        cout << v[i] << " ";
    }
}