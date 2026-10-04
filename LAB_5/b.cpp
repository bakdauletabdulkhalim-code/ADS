#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    priority_queue<int> q;
    for(int i = 0; i < n; i++){
        int x;
        cin >> x;
        q.push(x);
    }
    while(q.size() > 1){
        int a = q.top();
        q.pop();
        int b = q.top();
        q.pop();
        q.push(a-b);
    }
    if(q.empty()){
        cout<< 0;
    }
    else{
        cout << q.top();
    }
}