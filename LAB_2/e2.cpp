#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    vector<int> v(n);
    for(int i = 0; i < n; i++){
        cin >> v[i];
    }
    int avg = n / 2;
    for(int i = 0; i < n; i++){
        if(avg == i){
            continue;
        }
        cout << v[i] << " ";
    }
}