#include <bits/stdc++.h>
using namespace std;
struct Node{
    int val;
    Node* right;
    Node* left;
    Node(int x){
        val = x;
        right = nullptr;
        left = nullptr;
    }
};
Node* insert(Node* qadam, int x){
    if(qadam == nullptr){
        return new Node(x);
    }
    if(x < qadam->val){
        qadam->left = insert(qadam->left, x);
    }
    else{
        qadam->right = insert(qadam->right, x);
    }
    return qadam;
}
int main(){
    int n, m;
    cin >> n >> m;
    Node* qadam = nullptr;
    for(int i  = 0; i < n; i++){
        int x;
        cin >> x;
        qadam = insert(qadam, x);
    }
    while(m--){
        Node* curr = qadam;
        string s;
        cin >> s;
        for(char c : s){
            if(curr == nullptr){
                break;
            }
            if(c == 'L'){
                curr = curr->left;
            }
            else{
                curr = curr->right;
            }
        }
        if(curr == nullptr){
            cout << "NO\n";
        }
        else{
            cout << "YES\n";
        }
    }
}