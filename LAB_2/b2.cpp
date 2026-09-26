#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    vector<int> v(n);
    for(int i = 0; i < n; i++){
        cin >> v[i];
    }
    vector<int> odd;
    for(int i = 0; i < n; i++){
        if(i % 2 == 0){
            odd.push_back(v[i]);
        }
    }
    for(int num : odd){
        cout << num << " ";
    }
}