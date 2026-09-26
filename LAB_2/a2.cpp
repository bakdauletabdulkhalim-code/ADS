#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    while(n--){
        int m;
        cin >> m;
        int freq[26] = {};
        queue<char> q;
        for(int i = 0; i < m; i++){
            char s;
            cin >> s;
            freq[s - 'a']++;
            q.push(s);
            while(!q.empty() && freq[q.front() - 'a'] > 1){
                q.pop();
            }
            if(q.empty()){
                cout << -1 << " ";
            }
            else{
                cout << q.front() << " ";
            }
        }
    }
}