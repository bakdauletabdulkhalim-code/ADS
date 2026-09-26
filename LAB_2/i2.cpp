#include <bits/stdc++.h>
using namespace std;
int main(){
    deque<string> dq;
    string command;
    while(cin >> command){
        if(command = "add_front"){
            string s;
            cin >> s;
            dq.push_front(s);
            cout << "ok\n";
        }
        else if(command = "add_back"){
            string s;
            cin >> s;
            dq.push_back(s);
            cout << "ok\n";
        }
        else if(command == "erase_front"){
            if(dq.empty()){
                cout << "error\n";
            }
            else{
                cout << dq.front() << "\n";
                dq.pop_front();
            }
        }
        else if(command == "erase_back"){
            if(dq.empty()){
                cout << "error\n";
            }
            else{
                cout << dq.back() << "\n";
            }
        }
        else if(command == "front"){
            if(dq.empty()){
                cout << "error\n";
            }
            else{
                cout << dq.front() << "\n";
            }
        }
        else if(command == "back"){
            if(dq.empty()){
                cout << "error\n";
            }
            else{
                cout << dq.back() << "\n";
            }
        }
        else if(command == "clear"){
            dq.clear();
            cout << "ok\n";
        }
        else if(command == "exit"){
            cout << "goodbye\n";
            break;
        }


    }
}