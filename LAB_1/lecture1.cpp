#include <bits/stdc++.h>
using namespace std;
bool isprime(int n) {
    if (n < 2){
        return false;
    }
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0){
            return false;
        }
    }
    return true;
}

vector<int> primes(int n){
    vector<int> result;
    for(int i = 0; i * i <= n; i++){
        if(isprime(i)){
            result.push_back(i);
        }
    }
    return result;
}
int main(){
    int n;
    cin >> n;
    vector<int> ps = primes(n);
    for(int i = 0; i < ps.size(); i++){
        cout<< ps[i] << " ";
    }
}
