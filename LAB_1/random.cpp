#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    int arr[n];
    
    for(int i = 0; i< n; i++){
        cin >> arr[i];
    }
    int max = arr[0];
    int count = 0;
    for(int i= 0; i < n; i++){
        while(max <= arr[i]){
            count++;
        }
    }
    cout << count+1;
    return 0;
}