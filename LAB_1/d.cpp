#include <bits/stdc++.h>
using namespace std;
bool isPrime(int a){
    bool res = true;
    if(a < 2){
        res = false;
    }
    for(int i = 2; i * i <= a; i++){
        if(a % i == 0){
            res = false;
            break;
        }
    }
    return res;
}
int main(){
    int n;
    cin >> n;
    int count = 0;
    int x = 2;
    isPrime(x);
    while(count < n){
        if(isPrime(x)){
            count++;
        }
        if(count == x){
            cout << x;
            break;
        }
        x++;
    }
}