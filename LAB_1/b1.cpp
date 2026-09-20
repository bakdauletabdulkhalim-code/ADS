#include <bits/stdc++.h>
using namespace std;
long long powmod(long long a, long long b, long long c){
    a = a % c;
    int res = 1 % c;
    while(b){
        if(b % 2 == 1){
            res = (res * a)% c;
        }
        a = (a * a)%c;
        b = b /2;
    }
    return res;
}
int main(){
    long long a, b, c;
    cin >> a >> b >> c;
    cout << powmod(a, b, c);
    return 0;
}