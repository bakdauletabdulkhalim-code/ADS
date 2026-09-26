#include <bits/stdc++.h>
using namespace std;
int main(){
    int n, m;
    cin >> n >> m;
    vector<long long> a(n);
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    sort(a.begin(), a.end());
    while(m--){
        int l1, r1, l2, r2;
        cin >> l1 >> r1 >> l2 >> r2;
        int L = min(l1, l2);
        int N = max(r1, r2);
        if(max(l1, l2) <= min(r1, r2)){
            int leftpos = lower_bound(a.begin(), a.end(), L) - a.begin();
            int rightpos = upper_bound(a.begin(), a.end(), N) - a.begin();
            cout << rightpos - leftpos << "\n";
        }
        else{
            int leftpos2 = upper_bound(a.begin(), a.end(), r1) - lower_bound(a.begin(), a.end(), l1);
            int rightpos2 = upper_bound(a.begin(), a.end(), r2) - lower_bound(a.begin(), a.end(), l2);
            cout << leftpos2 + rightpos2 << "\n";
        }
    }
}