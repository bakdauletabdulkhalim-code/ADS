#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    map<string, string> curr;
    for(int i = 0; i < n; i++){
        string o, b;
        cin >> o >> b;
        bool found = 0;
        for(auto& user : curr){
            if(user.second == o){
                user.second = b;
                found = true;
                break;
            }
        }
        if(!found){
            curr[o] = b;
        }
    }
    cout << curr.size() << endl;
    for(auto& user : curr){
        cout << user.first << " " << user.second<< endl;
    }
}