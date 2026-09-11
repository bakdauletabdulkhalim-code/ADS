#include <bits/stdc++.h>
using namespace std;
void primaFactorization(long long a){
    for(int i = 2; i * i <= a; i++){
        while(a % i ==0){
            cout << i << " ";
            a = a / i;
        }
    }
    if(a > 1){
        cout << a;
    }
}
int main(){
    long long n;
    cin >> n;
    void primeFactorization(n);
    return 0;
}
// vector<int> primeFactorization(int n){
//     vector<int> res;
//     for(int i = 2; i <= n; i++){
//         if(n % i == 0){
//             res.push_back(i);
//         }
//     }
//     return res;
// }
// int main(){
//     int n;
//     cin >> n;
//     vector<int> res = primeFactorization(n);
//     for(int x : res){
//         cout << x << " ";
//     }
//     cout << endl;
// }