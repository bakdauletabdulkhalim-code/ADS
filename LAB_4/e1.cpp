#include <bits/stdc++.h>
using namespace std;
struct Node{
    Node* right = nullptr;
    Node* left = nullptr;
};
int main(){
    int n;
    cin >> n;
    vector<Node*> a(n+1);
    for(int i = 1; i <= n; i++){
        a[i] = new Node();
    }
    for(int i = 0; i < n - 1; i++){
        int p, c, s;
        cin >> p >> c >> s;
        if(s  == 0){
            a[p]->left = a[c];
        }
        else{
            a[p]->right = a[c];
        }
    }
    queue<Node*> q;
    q.push(a[1]);
    long long ans = 0;
    while(!q.empty()){
        long long size = q.size();
        ans = max(ans, size);
        while(size--){
            Node* curr = q.front();
            q.pop();
            if(curr->left){
                q.push(curr->left);
            }
            if(curr->right){
                q.push(curr->right);
            }
        }
    }
    cout << ans;
}

