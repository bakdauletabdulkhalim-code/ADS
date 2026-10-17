#include <bits/stdc++.h>
using namespace std;
struct Node{
    int val;
    Node* left;
    Node* right;
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
        qadam->left  = insert(qadam->left, x);
    }
    else if(x > qadam->val){
        qadam->right = insert(qadam->right, x);
    }
    return qadam;
}
int height(Node* qadam, int& x){
    if(qadam == nullptr){
        return 0;
    }
    int lh = height(qadam->left, x);
    int rh = height(qadam->right, x);
    x = max(x, 1 + lh + rh);
    return 1 + max(lh, rh);
}
int main(){
    int n;
    cin >> n;
    Node* qadam = nullptr;
    for(int i = 0; i < n; i++){
        int x;
        cin >> x;
        qadam =insert(qadam, x);
    }
    int sum = 0;
    height(qadam, sum);
    cout << sum;
}