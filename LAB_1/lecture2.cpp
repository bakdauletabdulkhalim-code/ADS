#include <bits/stdc++.h>
using namespace std;
vector<int> eratosPrimes(int n){
    vector<bool> isPrime(n + 1, true);
    isPrime[0] = isPrime[1] = false;
    for(int i = 2; i<=n; i++){
        if(isPrime[i]){
            for(int j = i*i; j <= n; j+=i){
                isPrime[j] = false;
            }
        }
    }
    vector<int> realPrimes;
    for(int i = 0; i <= n; i++){
        if(isPrime[i]){
            realPrimes.push_back(i);
        }
    }
    return realPrimes;
}
int main(){
    int n;
    cin >> n;
    vector<int> primes = eratosPrimes(n);
    for(int x : primes){
        cout << x << " "
    }
    cout << endl;
    cout << primes.size();
    
}