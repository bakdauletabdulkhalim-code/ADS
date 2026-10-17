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
    int n;
    cin >> n;
    Node* qadam = nullptr;
    for(int i = 0; i < n; i++){
        int x;
        cin >> x;
        qadam = insert(qadam, x);
    }
    queue<Node*> q;
    q.push(qadam);
    vector<long long> ans;
    while(!q.empty()){
        int size = q.size();
        long long sum = 0;
        while(size--){
            Node* curr = q.front();
            q.pop();
            sum += curr->val;
            if(curr->left){
                q.push(curr->left);
            }
            if(curr->right){
                q.push(curr->right);
            }
        }
        ans.push_back(sum);
    }
    cout << ans.size() << endl;
    for(long long y : ans){
        cout << y << " ";
    }
}