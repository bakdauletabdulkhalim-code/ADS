#include <bits/stdc++.h>
using namespace std;
int main(){
    int n, m;
    cin >> n >> m;
    vector<int> a(n);
    for(int i = 0; i < n ; i++){
        long long l1, r1, l2, r2;
        cin >> l1 >> r1 >> l2 >> r2;
        a[i] = max(r2, l2);
    }
    sort(a.begin(), a.end());
    cout << a[m - 1] << "\n";
}