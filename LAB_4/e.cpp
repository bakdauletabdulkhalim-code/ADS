#include <bits/stdc++.h>
using namespace std;
struct Node{
    Node* left = nullptr;
    Node* right = nullptr;
};
int main(){
    int n;
    cin >> n;
    vector<Node*> a(n+1);
    for(int i = 1; i <= n; i++){
        a[i] = new Node();
    }
    for(int i = 0; i < n - 1; i++){
        int parent, child, size;
        cin >> parent >> child >> size;
        if(size == 0){
            a[parent]->left = a[child];
        }
        else{
            a[parent]->right = a[child];
        }
    }
    queue<Node*> q;
    q.push(a[1]);
    int ans = 0;
    while(!q.empty()){
        int size = q.size();
        ans = max(ans, size);
        while(size--){
            Node* x = q.front();
            q.pop();
            if(x->left){
                q.push(x->left);
            }
            if(x->right){
                q.push(x->right);
            }
        }
    }
    cout << ans;
}