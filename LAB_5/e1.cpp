#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    int answer = 0;
    for(int i = 2; i *i <= n; i++){
        if(n % i == 0){
            answer++;
        }
        while(n % i == 0){
            n /= i;
        }
    }
    if(n > 1){
        answer++;
    }
    cout << answer << endl;
}
