#include <bits/stdc++.h>
using namespace std;
int main(){
    int n, m;
    cin >> n >> m;
    vector<int> a(n);
    for(int i = 0; i< n; i++){
        cin >> a[i];
    }
    long long left = 0;
    long long sum = 0;
    long long ans = n + 1;
    for(int right = 0; right < n; right++){
        sum += a[right];
        while(sum >= m){
            ans = min(ans, right-left+1);
            sum -= a[left];
            left++;
        }
    }
    if(m == 0){
        ans = 1;
    }
    cout << ans << "\n";
}