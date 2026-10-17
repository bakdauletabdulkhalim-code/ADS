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
void Kmin(Node* qadam, int& k, long long& ans ){
    if(qadam == nullptr){
        return;
    }
    Kmin(qadam->left, k, ans);
    k--;
    if(k == 0){
        ans = qadam->val;
        return;
    }
    Kmin(qadam->right, k, ans);
}
int main(){
    int n, k;
    cin >> n >> k;
    Node* qadam = nullptr;
    for(int  i =0; i < n; i++){
        int x;
        cin >> x;
        qadam = insert(qadam, x);
    }
    long long ans = -1;
    Kmin(qadam, k, ans);
    cout << ans;
}