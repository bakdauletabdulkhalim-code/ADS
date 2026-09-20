#include <bits/stdc++.h>
using namespace std;
void gcd(long long a, long long b){
    while(b > 0){
        long long temp = a % b;
        a = b;
        b = temp;
    }
    cout << a;
}
int main(){
    long long a, b;
    cin >> a >> b;
    gcd (a, b);
}