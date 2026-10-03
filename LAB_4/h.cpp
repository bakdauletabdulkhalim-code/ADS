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
    if(x < qadam->val){
        qadam->left = insert(qadam->left, x);
    }
    else{
        qadam->right = insert(qadam->right, x);
    }
    return qadam;
}
void gcd(Node* qadam, long long& sum){
    if(qadam == nullptr){
        return;
    }
    gcd(qadam->right, sum);
    sum += qadam->val;
    qadam->val = sum;
    gcd(qadam->left, sum);

}
void print(Node* qadam){
    if(qadam == nullptr){
        return;
    }
    print(qadam->right);
    cout << qadam->val << " ";
    print(qadam->left);
}
int main(){
    int n;
    cin >> n;
    Node* qadam = nullptr;
    for(int i = 0; i < n;i++){
        int x;
        cin >> x;
        qadam = insert(qadam, x);
    }
    long long ans = 0;
    gcd(qadam, ans);
    print(qadam);
}