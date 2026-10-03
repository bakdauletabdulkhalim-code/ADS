#include <bits/stdc++.h>
using namespace std;
struct Bake{
    int val;
    Bake* left;
    Bake* right;
    Bake(int x){
        val = x;
        left = nullptr;
        right = nullptr;
    }
};
Bake* insert(Bake* qadam, int x){
    if(qadam == nullptr){
        return new Bake(x);
    }
    if(x < qadam->val){
        qadam->left = insert(qadam->left, x);
    }
    else{
        qadam->right= insert(qadam->right, x);
    }
    return qadam;
}
int main(){
    int n;
    cin >> n;
    Bake* qadam = nullptr;
    for(int i = 0; i< n; i++){
        int x;
        cin >> x;
        qadam = insert(qadam, x);
    }
    queue<Bake*> q;
    q.push(qadam);
    vector<long long> ans;
    while(!q.empty()){
        int size = q.size();
        long long sum = 0;
        for(int i = 0; i < size; i++){
            Bake* cur = q.front();
            q.pop();
            sum += cur->val;
            if(cur->left != nullptr){
                q.push(cur->left);
            }
            if(cur->right != nullptr){
                q.push(cur->right);
            }

        }
        ans.push_back(sum);
    }
    cout << ans.size() << endl;
    for(long long x : ans){
        cout << x << " ";
    }
    
}