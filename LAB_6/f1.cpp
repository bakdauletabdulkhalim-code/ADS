#include <bits/stdc++.h>
using namespace std;
struct Node{
    string l, f;
    double g;
};
double ggpa(string& a){
    if(a == "A+"){
        return 4.0;
    }
    if(a == "A"){
        return 3.75;
    }
    if(a == "B+"){
        return 3.5;
    }
    if(a == "B"){
        return 3.0;
    }
    if(a == "C+"){
        return 2.5;
    }
    if(a == "C"){
        return 2.0;
    }
    if(a == "D+"){
        return 1.5;
    }
    if(a == "D"){
        return 1.0;
    }
    if(a == "F"){
        return 0.0;
    }
    return 0.0;
}
bool les(Node& a, Node& b){
    if(a.g != b.g){
        return a.g < b.g;
    }
    if(a.l != b.l){
        return a.l < b.l;
    }
    return a.f < b.f;
}
void heapify(vector<Node>& a, int n, int i){
    int m = i;
    int l = 2 * i + 1;
    int r = 2 * i + 2;
    if(l < n && les(a[m], a[l])){
        m = l;
    }
    if(r < n && les(a[m], a[r])){
        m = r;
    }
    if(i != m){
        swap(a[i], a[m]);
        heapify(a, n, m);
    }
}
void heapsort(vector<Node>& a){
    int n = a.size();
    for(int i = n/2 -1; i >= 0; i--){
        heapify(a, n, i);
    }
    for(int i = n - 1; i >= 0; i--){
        swap(a[0], a[i]);
        heapify(a, i, 0);
    }
}
int main(){
    int n;
    cin >> n;
    vector<Node> a(n);
    for(int i = 0; i < n; i++){
        int k;
        cin >> a[i].l >> a[i].f >> k;
        double tg = 0, tc = 0;
        for(int j = 0; j < k; j++){
            string grade;
            int c;
            cin >> grade >> c;
            tg += ggpa(grade)*c;
            tc += c;
        }
        a[i].g = tg/tc;
    }
    heapsort(a);
    cout << fixed << setprecision(3);
    for(int i = 0; i < n; i++){
        cout << a[i].l << " " << a[i].f << " " << a[i].g << endl;
    }
}