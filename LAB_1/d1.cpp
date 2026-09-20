#include <bits/stdc++.h>
using namespace std;
bool isPrime(int x){
    bool res = true;
    if(x < 2){
        res = false;
    }
    for(int i = 2; i * i <= x; i++){
        if(x % i == 0){
            res = false;
        }
    }
    return res;
}
int main(){
    int n;
    cin >> n;
    int count = 0;
    int x = 2;
    while(count < n){
        if(isPrime(x)){
            count++;
        }
        if(count == n){
            cout << x;
        }
        x++;
    }
}