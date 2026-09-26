#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    vector<int> odd;
    for(int i = 0; i < n; i++){
        if(i % 2 == 0){
            odd.push_back(arr[i]);
        }
    }
    for(int num : odd){
        cout << num << " ";
    }
}