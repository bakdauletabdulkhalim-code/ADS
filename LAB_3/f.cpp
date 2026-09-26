#include <bits/stdc++.h>
using namespace std;
long long needhours(vector<int>& a, int speed){
    int hours = 0;
    for(int x : a){
        hours += (x + speed - 1)/speed;
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
    int low = 1;
    int high = *max_element(a.begin(), a.end());
    while(low < high){
        int mid = (low+high)/2;
        if(needhours(a, mid) <= m){
            high = mid;
        }
        else{
            low = mid + 1;
        }
    }
    cout << low << "\n";
}