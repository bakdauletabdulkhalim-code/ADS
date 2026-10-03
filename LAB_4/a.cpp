#include <bits/stdc++.h>
using namespace std;
struct Node{
    int value;
    Node* left;
    Node* right;
    Node(int x){
        value = x;
        left = nullptr;
        right = nullptr;
    }
};
Node* insert(Node* san, int x){
    if(san == nullptr){
        return new Node(x);
    }
    if(x <= san->value){
        san->left= insert(san->left, x);
    }
    else{
        san->right = insert(san->right, x);
    }
    return san;
}
int main(){
    int n, m;
    cin >> n >> m;
    Node* san = nullptr;
    for(int i = 0; i < n; i++){
        int x;
        cin >> x;
        san = insert(san, x);
    }
    while(m--){
        Node* current = san;
        string path;
        cin >> path;
        for(char s : path){
            if(current == nullptr){
                break;
            }
            if(s == 'L'){
                current = current->left;
            }
            else{
                current = current->right;
            }
        }
        if(current == nullptr){
            cout << "NO\n";
        }
        else{
            cout << "YES\n";
        }
    }
}