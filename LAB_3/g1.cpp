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
    for(int iter = 0; iter < 100; iter++){
        double mid = (low+high)/2;
        int p = 0;
        for(int x : a){
            p += (long long)(x/mid);

        }
        if(p >= m){
            low = mid;
        }
        else{
            high = mid;
        }
    }
    cout << fixed << setprecision(9) << low << "\n";
}