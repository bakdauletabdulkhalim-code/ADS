#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
bool can(vector<long long>& a, int m, long long limit){
    long long blocks= 1;
    long long sum = 0;
    for(int x : a){
        if(sum + x <= limit){
            sum += x;
        }
        else{
            blocks++;
            sum = x;
        }
    }
    return blocks <= m;
}
int main(){
    int n, m;
    cin >> n >> m;
    long long left = 0; 
    long long right = 0;
    vector<long long> a(n);
    for(int i = 0; i < n; i++){
        cin >> a[i];
        left = max(left, a[i]);
        right += a[i];
    }
    while(left < right){
        long long mid = left + (right - left)/2;
        if(can(a, m, mid)){
            right = mid;
        }
        else{
            left = mid + 1;
        }

    }
    cout << left << "\n";
}