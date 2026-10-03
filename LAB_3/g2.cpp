#include <bits/stdc++.h>
using namespace std;
int main(){
    int n, m;
    cin >> n >> m;
    vector<double> a(n);
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    double low = 0.0, high = *max_element(a.begin(), a.end());
    for(int i = 0; i < 100; i++){
        double mid = (low+high)/2;
        int pieces = 0;
        for(int x : a){
            pieces += (long long)(x/mid);
        }
        if(pieces >= m){
            low = mid;
        }
        else{
            high = mid;
        }
    }
    cout << fixed << setprecision(9) << low;
}