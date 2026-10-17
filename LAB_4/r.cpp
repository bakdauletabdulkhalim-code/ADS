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
        qadam->right= insert(qadam->right, x);
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
    cout << qadam->val<< " ";
    print(qadam->right);
    print(qadam->left);
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
    long long sum = 0;
    gcd(qadam, sum);
    print(qadam);
}
