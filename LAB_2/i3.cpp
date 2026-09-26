#include <bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    deque<string> dq;
    string cmd;
    while(cin >> cmd){
        if(cmd == "add_front"){
            string s;
            cin >> s;
            dq.push_front(s);
            cout << "ok\n";
        }
        else if(cmd == "add_back"){
            string s;
            cin >> s;
            dq.push_back(s);
            cout << "ok\n";
        }
        else if(cmd == "erase_front"){
            if(dq.empty()){
                cout << "error\n";
            }
            else{
                cout << dq.front() << "\n";
                dq.pop_front();
            }
        }
        else if(cmd == "erase_back"){
            if(dq.empty()){
                cout << "error\n";
            }
            else{
                cout << dq.back() << "\n";
                dq.pop_back();
            }
        }
        else if(cmd == "front"){
            if(dq.empty()){
                cout << "error\n";
            }
            else{
                cout << dq.front() << "\n";
            }
        }
        else if(cmd == "back"){
            if(dq.empty()){
                cout << "error\n";
            }
            else{
                cout << dq.back() << "\n";
            }
        }
        else if(cmd == "clear"){
            dq.clear();
            cout << "ok\n";
        }
        else if(cmd == "exit"){
            cout << "goodbye\n";
            break;
        }
    }
}