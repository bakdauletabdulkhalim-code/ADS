#include <bits/stdc++.h>
using namespace std;
void bsort(vector<string>& a){
    for(int i = 0; i < a.size() - 1; i++){
        for(int j = 0; j < a.size() - i - 1; j++){
            string d1 = a[j].substr(6, 4) + a[j].substr(3, 2) + a[j].substr(0, 2);
            string d2 = a[j+1].substr(6, 4) + a[j+1].substr(3, 2) + a[j+1].substr(0, 2);
            if(d1 > d2){
                swap(a[j], a[j+1]);
            }
        }
    }
}
int main(){
    int n;
    cin >> n;
    vector<string> a(n);
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    bsort(a);
    for(int i = 0; i < n; i++){
        cout << a[i]<< endl;
    }
}