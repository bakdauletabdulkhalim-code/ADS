#include <bits/stdc++.h>
using namespace std;
struct Node{
    int val;
    Node* left;
    Node* right;
    Node(int x){
        val = x;
        left = nullptr;
        right = nullptr;
    }
};
Node* insert(Node* qadam, int x){
    if(qadam == nullptr){
        return new Node(x);
    }
    if(qadam->val > x){
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
void santa(Node* qadam, int x){
    if(qadam == nullptr){
        return;
    }
    cout << qadam->val << " ";
    santa(qadam->left, x);
    santa(qadam->right, x);
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
    santa(target, m);
}
