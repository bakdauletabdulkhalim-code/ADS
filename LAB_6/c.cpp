#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    vector<int> a(n);
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    sort(a.begin(), a.end());
    int min = INT_MAX;
    for(int i = 0; i < n - 1; i++){
        int diff = a[i + 1] - a[i];
        if(diff < min){
            min = diff;
        }
    }
    for(int i = 0; i < n - 1; i++){
        int diff = a[i + 1] - a[i];
        if(diff == min){
            cout << a[i] << " " << a[i+1]<< " ";
        }
    }