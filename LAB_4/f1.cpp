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
    if(qadam == 0){
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
int trii(Node* tri){
    if(tri == nullptr){
        return 0;
    }
    int ans = 0;
    if(tri->left != nullptr && tri->right != nullptr){
        ans++;
    }
    return ans+trii(tri->left) +trii(tri->right);
}
int main(){
    int n;
    cin >> n;
    Node* qadam = nullptr;
    for(int i = 0; i  < n ; i++){
        int x;
        cin >> x;
        qadam = insert(qadam, x);
    }
    cout << trii(qadam);
}
