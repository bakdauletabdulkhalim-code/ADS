#include <bits/stdc++.h>
using namespace std;
void inserts(vector<int>& a, int x, int p){
    a.insert(a.begin() + p, x);;
}
void remove(vector<int>& a, int p){
    a.erase(a.begin() + p);
}
void print(const vector<int>& a){
    if(a.empty()){
        cout << -1 << endl;
        return;
    }
    for(int i = 0; i < (int)a.size(); i++){
        if(i > 0){
            cout << " ";
        }
        cout << a[i];
    }
    cout << endl;
}
void replace(vector<int>& a; int p1, int p2){
    int value = a[p1];
    a.erase(a.begin() + p1);
    a.insert(a.begin() + p2, value);
}
void reverse(vector<int>& a){
    reverse(a.begin(), a.end());
}
void cyclic_left(vector<int>& a, int x){
    if(a.empty())
        return;
    int n = a.size();
    x %= n;
    if(x == 0)
        return;
    vector<int> temp;
    for(int i = x; i < n; i++){
        temp.push_back(a[i]);
    }
    for(int i = 0; i < x; i++){
        temp.push_back(a[i]);
    }
    a = temp;
}
void cyclic_right(vector<int>& a, int x){
    if(a.empty())
        return;
    int n = a.size();
    x = x % a.size();
    vector<int> temp;
    for(int i = n - x; i < n; i++){
        temp.push_back(a[i]);

    }
    for(int i = 0; i < n - x; i++){
        temp.push_back(a[i]);
    }
    a = temp;
}
int main(){
    vector<int> a;
    int cmd;
    while(cin >> cmd){
        if(cmd == 0){
            break;
        }
        if(cmd == 1){
            int p, x;
            cin >> p >> x;
            inserts(a, p, x);
        }
        else if(cmd == 2){
            int p;
            cin >> p;
            remove(a, p);
        }
        else if(cmd == 3){
            print(a);
        }
        else if(cmd == 4){
            int p1, p2;
            cin >> p1, p2;
            replace(a, p1, p2);
        }
        else if(cmd == 5){
            reverse(a);
        }
        else if(cmd == 6){
            int x;
            cin >> x;
            cyclic_left(a, x);
        }
        else if(cmd == 7){
            int x;
            cin >> x;
            cyclic_right(a, x);
        }
    }
}