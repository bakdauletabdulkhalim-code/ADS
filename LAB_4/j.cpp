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
void minK(Node* qadam, int& k, int& answer){
    if(qadam == nullptr){
        return;
    }
    minK(qadam->left, k, answer);
    k--;
    if(k == 0){
        answer = qadam->val;
        return;
    }
    minK(qadam->right, k, answer);
}
int main(){
    int n, k;
    cin >> n >> k;
    Node* qadam = nullptr;
    for(int i =0; i < n; i++){
        int x;
        cin >> x;
        qadam = insert(qadam, x);
    }
    int answer = -1;
    minK(qadam, k, answer);
    cout << answer;
}