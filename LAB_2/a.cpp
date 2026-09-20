#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    while(n--){
        int m;
        cin >> m;
        int freq[26] = {};
        queue<char> qu;
        for(int i = 0; i < m; i++){
            char s;
            cin >> s;

            freq[s - 'a']++;
            qu.push(s);

            while(!qu.empty() && freq[qu.front() - 'a'] > 1){
                qu.pop();
            }
            if(qu.empty()){
                cout << -1 << " ";
            }
            else{
                cout << qu.front() << " ";
            }
        }
        cout << endl;
    }
    return 0;
}