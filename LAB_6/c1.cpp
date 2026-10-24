#include <bits/stdc++.h>
using namespace std;
void bsort(vector<int>& a){
    for(int i = 0; i < a.size() - 1; i++){
        for(int j = 0; j < a.size() - i - 1; j++){
            if(a[j] > a[j+1]){
                swap(a[j], a[j+1]);
            }
        }
    }
}
int main(){
    int n;
    cin >> n;
    vector<int> a(n);
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    bsort(a);
    // sort(a.begin(), a.end());
    int min = INT_MAX;
    for(int i = 0; i < n - 1; i++){
        int diff = a[i+1] - a[i];
        if(diff < min){
            min = diff;
        }
    }
    for(int i = 0; i < n - 1; i++){
        int diff = a[i+1] - a[i];
        if(diff == min){
            cout << a[i] << " " << a[i+1] << " ";
        }
    }
}