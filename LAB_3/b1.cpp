#include <bits/stdc++.h>
using namespace std;
int main(){
    int n, m;
    cin >> n >> m;
    vector<int> a(n);
    for(int i = 0; i < n; i++){
        cin  >> a[i];
    }
    sort(a.begin(), a.end());
    while(m--){
        int l1, r1, l2,r2;
        cin >> l1 >> r1 >> l2 >> r2;
        int L= min(l1,l2);
        int R = max(r1,r2);
        if(max(l1,l2) <= min(r1, r2)){
            int c = upper_bound(a.begin(), a.end(), R) - a.begin();
            int d = lower_bound(a.begin(), a.end(), L) - a.begin();
            cout <<c - d << "\n";
        }
        else{
            int c = upper_bound(a.begin(), a.end(), r1) - lower_bound(a.begin(), a.end(), l1);
            int d = upper_bound(a.begin(), a.end(), r2) - lower_bound(a.begin(), a.end(), l2);
            cout << c + d << "\n";
        }
    }
}