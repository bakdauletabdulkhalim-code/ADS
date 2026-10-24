#include <bits/stdc++.h>
using namespace std;
void bsort(vector<int>& a){
    for(int i = 0; i < a.size(); i++){
        for(int j = 0; j < a.size() - i - 1; j++){
            if(a[j] > a[j+1]){
                swap(a[j], a[j+1]);
            }
        }
    }
}
int main(){
    int n, m;
    cin >> n >> m;
    vector<int> a(n);
    vector<int> b(m);
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    for(int j = 0; j < m; j++){
        cin >> b[j];
    }
    bsort(a);
    bsort(b);
    int j = 0;
    for(int i = 0; i < n; i++){
        for(; j < m; j++){
            if(a[i] == b[j]){
                cout << a[i] << " ";
                j++;
                break;
            }
            else if(b[j] > a[i]){
                break;
            }
        }
    }

}