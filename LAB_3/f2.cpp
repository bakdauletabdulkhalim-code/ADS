#include <bits/stdc++.h>
using namespace std;
int robinhood(vector<int>&a, long long speed){
    int hours = 0;
    for(int x : a){
        hours += (x+speed-1)/speed;
    }
    return hours;
}
int main(){
    int n, m;
    cin >> n >> m;
    vector<int> a(n);
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    int low = 1, high = *max_element(a.begin(), a.end());
    while(low < high ){
        long long mid = (low+high)/2;
        if(robinhood(a, mid) <= m){
            high = mid;
        }
        else{
            low = mid + 1;
        }
    }
    cout << low << "\n";
}