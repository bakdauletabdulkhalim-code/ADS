#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    bool a = true;
    if(n < 2){
        a = false;
    }
    for(int i = 2; i * i <= n; i++){
        if(n % i == 0){
            a = false;
            break;
        }
    }
    if(a){
        cout << "YES";
    }
    else{
        cout << "NO";
    }
}