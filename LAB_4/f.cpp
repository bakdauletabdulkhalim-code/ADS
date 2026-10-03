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
        qadam->left = insert(qadam->left, x);
    }
    else{
        qadam->right = insert(qadam->right, x);
    }
    return qadam;
}
int tri(Node* qadam){
    if(qadam == nullptr){
        return 0;
    }
    int answer = 0;
    if(qadam->left != nullptr && qadam->right!=nullptr){
        answer++;
    }
    return  answer + tri(qadam->left) + tri(qadam->right);
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
    cout << tri(qadam) << endl;
}
