#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    bool res = true;
    if(n < 2){
        res = false;
    }
    for(int i = 2; i * i <= n; i++){
        if(n % i == 0){
            res = false;
        }
    }
    if(res){
        cout << "YES";
    }
    else{
        cout << "NO";
    }
    return 0;
}