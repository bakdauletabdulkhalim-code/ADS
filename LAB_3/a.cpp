#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    vector<int> v(n);
    for(int i = 0; i < n; i++){
        cin >> v[i];
    }
    bool res = false;
    int m;
    cin >> m;
    for(int i = 0; i < n; i++){
        if(v[i] == m){
            res = true;
        }
    }
    if(res){
        cout << "Yes";
    }
    else{
        cout << "No";
    }

}
