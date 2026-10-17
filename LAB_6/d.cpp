#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    vector<string> a(n);
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    sort(a.begin(), a.end(),
    [](string x, string y){
        return x.substr(6, 4) + x.substr(3, 2) + x.substr(0, 2) < y.substr(6, 4) + y.substr(3, 2) + y.substr(0, 2);
    });
    for(int i = 0; i < n; i++){
        cout << a[i] << endl;
    }
}