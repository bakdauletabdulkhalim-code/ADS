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
Node* find(Node* qadam, int x){
    if(qadam == nullptr || qadam->val == x){
        return qadam;
    }
    if(x < qadam->val){
        return find(qadam->left, x);
    }
    else{
        return find(qadam->right, x);
    }
}
int size(Node* qadam){
    if(qadam == nullptr){
        return 0;
    }
    return 1 + size(qadam->left) + size(qadam->right);
}
int main(){
    int n;
    cin >> n;
    Node* qadam = nullptr;
    for(int i = 0; i < n; i++){
        int x;
        cin >> x;
        qadam = insert(qadam, x);
    }
    int m;
    cin >> m;
    Node* target = find(qadam, m);
    cout << size(target) << endl;
}