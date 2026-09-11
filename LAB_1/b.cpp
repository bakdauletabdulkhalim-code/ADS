#include <bits/stdc++.h>
using namespace std;
int powmod(int a, int b, int c){
    a = a % c;
    int res = 1;
    while(b > 0){
        if( b % 2 == 1){
            res = (res * a) % c;
        }
        a = (a * a) % c;
        b = b/2;
    }
    return res;
}
int main(){
    int n, m, k;
    cin >> n >> m >> k;
    powmod(n, m, k);
    cout << powmod(n, m, k);

}