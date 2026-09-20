#include <bits/stdc++.h>
using namespace std;
int main(){
    int a;
    cin >> a;
    int arr[a];
    for(int i = 0; i < a; i++){
        cin >> arr[i];
    }
    int avg = a/2;
    for(int i = 0; i < a; i++){
        if(avg == i){
            continue;
        }
        cout << arr[i] << " ";
    }
    return 0;
}