#include <bits/stdc++.h>
using namespace std;
void inserts(vector<long long>& a, long long x, long long p){
    a.insert(a.begin() + p, x);
}
void removeNode(vector<long long>& a, long long p){
    a.erase(a.begin() + p);
}
void print(const vector<long long>& a){
    if(a.empty()){
        cout << -1 << endl;
        return;
    }
    for(int i = 0; i < (long long)a.size(); i++){
        if(i > 0)
            cout << " ";
        cout << a[i];
    }
    cout << endl;
}
void replaceNode(vector<long long>& a, long long p1, long long p2){
    long long value = a[p1];
    a.erase(a.begin() + p1);
    a.insert(a.begin() + p2, value);
}
void reverseList(vector<long long>& a){
    reverse(a.begin(), a.end());
}
void cyclic_left(vector<long long>& a,long long x){
    if(a.empty())
        return;
    int n = a.size();
    x %= n;
    if(x == 0)
        return;
    vector<long long> temp;
    for(int i = x; i < n; i++){
        temp.push_back(a[i]);
    }
    for(int i = 0; i< x; i++){
        temp.push_back(a[i]);
    }
    a = temp;
}
void cyclic_right(vector<long long>& a, long long x){
    if(a.empty()){
        return;
    }
    int n = a.size();
    x = x % a.size();
    vector<long long> temp;
    for(int i = n - x; i < n; i++){
        temp.push_back(a[i]);
    }
    for(int i = 0; i < n - x; i++){
        temp.push_back(a[i]);
    }
    a = temp;
}
int main(){
    vector<long long> a;
    long long command;
    while(cin >> command){
        if(command == 0){
            break;
        }
        if(command == 1){
            long long x, p;
            cin >> x >> p;
            inserts(a, x, p);
        }
        else if(command == 2){
            long long p;
            cin >> p;
            removeNode(a, p);
        }
        else if(command == 3){
            print(a);
        }
        else if(command == 4){
            long long p1, p2;
            cin >> p1 >> p2;
            replaceNode(a, p1, p2);
        }
        else if(command == 5){
            reverseList(a);
        }
        else if(command == 6){
            long long x;
            cin >> x;
            cyclic_left(a, x);
        }
        else if(command == 7){
            long long x;
            cin >> x;
            cyclic_right(a, x);
        }
    }
    return 0;
}