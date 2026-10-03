#include <bits/stdc++.h>
using namespace std;
int main(){
    int n, m;
    cin >> n >> m;
    vector<long long> a(n);
    long long sum = 0;
    for(int i = 0; i < n;i++){
        long long b;
        cin >> b;
        sum += b;
        a[i] = sum;
    }
    while(m--){
        long long c;
        cin >> c;
        int d = int(lower_bound(a.begin(), a.end(), c) - a.begin());
        int e = d + 1;
        cout << e << "\n";
    }
}