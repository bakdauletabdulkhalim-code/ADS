#include <bits/stdc++.h>
using namespace std;
struct Bake{
    int val;
    Bake* right;
    Bake* left;
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
    if( x < qadam->val){
        qadam->left = insert(qadam->left, x);
    }
    else{
        qadam->right = insert(qadam->right, x);
    }
    return qadam;
}
Bake* find(Bake* qadam, int x){
    if( qadam == nullptr || qadam->val == x){
        return qadam;
    }
    if( x < qadam->val){
        return find(qadam->left, x);
    }
    else{
        return find(qadam->right, x);
    }
}
void santa(Bake* qadam, int x){
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
    Bake* qadam = nullptr;
    for(int i = 0; i < n; i++){
        int x;
         cin >> x;
         qadam = insert(qadam, x);
    }
    int m;
    cin >> m;
    Bake* target = find(qadam, m);
    santa(target, m);
}
