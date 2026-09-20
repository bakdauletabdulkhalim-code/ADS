#include <bits/stdc++.h>
#include <string>
using namespace std;
string solve (string s){
    string res = "";
    for(int i = 0; i < s.size(); i++){
        if(s[i] == '#'){
            if(!res.empty()){
                res.pop_back();
            }
        }
        else{
            res += s[i];
        }
    }

}
int main(){
    string a, b;
    cin >> a;
    cin >> b;
    string resA = solve(a);
    string resB = solve(b);
    if(resA == resB){
        cout << "Yes";
    }
    else{
        cout << "No";
    }
}