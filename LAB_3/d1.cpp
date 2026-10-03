#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    vector<int> a(n);
    for(int i = 0; i < n ;i ++){
        cin >> a[i];
    }
    sort(a.begin(), a.end());
    vector<int> pref(n+1, 0);
    for(int i = 0; i < n; i++){
        pref[i+1] = pref[i] + a[i];
    }
    int rounds;
    cin >> rounds;
    while(rounds--){
        long long b;
        cin >> b;
        int pos = upper_bound(a.begin(), a.end(), b) - a.begin();
        cout << pos << " " << pref[pos] << "\n";
    }
}