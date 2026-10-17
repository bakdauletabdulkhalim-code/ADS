#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    vector<char> a(n);
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    char c;
    cin >> c;
    int left = 0;
    int right = n - 1;
    int answer = 0;
    while(left <= right){
        int mid = left + (right - left) / 2;
        if(a[mid] > c){
            answer = mid;
            right = mid -1;
        }
        else{
            left = mid  + 1;
        }
    }
    cout << a[answer] << endl;
}