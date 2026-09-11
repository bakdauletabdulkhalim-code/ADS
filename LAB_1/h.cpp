#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    int a[n];
    for(int i = 0;i < n;i++){
        cin >> a[i];
    }
    stack<int> st;
    for(int i = 0; i < n; i++){
        while(!st.empty() && st.top() >= a[i]){
            st.pop();
        }
        if(st.empty()){
            cout << -1 << " ";
        }
        else{
            cout << st.top() << " ";
        }
        st.push(a[i]);
    }
    return 0;
}
