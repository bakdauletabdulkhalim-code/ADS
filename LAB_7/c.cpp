#include <bits/stdc++.h>
using namespace std;
void merge(vector<vector<int>>& a, int l, int m, int r){
    int i = l;
    int j = m + 1;
    vector<vector<int>> temp;
    while(i <= m && j <= r){
        int sum1 = 0;
        int sum2 = 0;
        for(int& x : a[i]){
            sum1 += x;
        }
        for(int& x : a[j]){
            sum2 += x;
        }
        bool left = false;
        if(sum1 > sum2){
            left = true;
        }
        else if(sum1 == sum2){
            if(a[i] <= a[j]){
                left = true;
            }
        }
        if(left){
            temp.push_back(a[i++]);
        }
        else{
            temp.push_back(a[j++]);
        }
    }
    while(i <= m){
        temp.push_back(a[i++]);
    }
    while(j <= r){
        temp.push_back(a[j++]);
    }
    for(int k = 0; k < temp.size(); k++){
        a[l+k] = temp[k];
    }
}
void msort(vector<vector<int>>& a, int l, int r){
    if(l >= r){
        return;
    }
    int m = l + (r - l)/2;
    msort(a, l, m);
    msort(a, m+1, r);
    merge(a, l, m, r);
}
int main(){
    int n, m;
    cin >> n >> m;
    vector<vector<int>>a(n, vector<int>(m));
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cin >> a[i][j];
        }
    }
    if(n>0){
        msort(a, 0, n-1);
    }
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
}