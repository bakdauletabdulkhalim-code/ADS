#include <bits/stdc++.h>
using namespace std;
void gcd(int a, int b){
    while(b != 0){
        int temp = a % b;
        a = b;
        b = temp;
    }
    cout << a;
}
int main(){
    int n, m;
    cin >> n >> m;
    gcd(n, m);

}