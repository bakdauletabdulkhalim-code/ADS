#include <bits/stdc++.h>
using namespace std;
long long bolu(long long n){
    for(int i = 2; i *i <= n; i++){
        while(n % i == 0){
            cout << i << " ";
            n = n / i;
        }
    }
    if (n > 1){
        cout << n;
    }
}
int main(){
    long long n;
    cin >> n;
    bolu(n);
}