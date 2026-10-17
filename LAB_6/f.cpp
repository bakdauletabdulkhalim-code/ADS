#include <bits/stdc++.h>
using namespace std;
struct S{
    string l, f;
    double gpa;
};
double ggpa(const string& grade){
    if(grade == "A+"){
        return 4.0;
    }
    if(grade == "A"){
        return 3.75;
    }
    if(grade == "B+"){
        return 3.5;
    }
    if(grade == "B"){
        return 3.0;
    }
    if(grade == "C+"){
        return 2.5;
    }
    if(grade == "C"){
        return 2.0;
    }
    if(grade == "D+"){
        return 1.5;
    }
    if(grade == "D"){
        return 1.0;
    }
    if(grade == "F"){
        return 0.0;
    }
    return 0.0;
}
bool les(const S& a, const S& b){
    if(a.gpa != b.gpa){
        return a.gpa < b.gpa;
    }
    if(a.l != b.l){
        return a.l < b.l;;
    }
    return a.f < b.f;
}
void heapify(vector<S>& a, int& n, int& i){
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
void heapsort(const vector<S>& a){
    int n = a.size();
    for(int i = n/2 - 1; i >= 0; i--){
        heapify(a, n, i);
    }
    for(int i = n - 1; i > 0; i--){
        swap(a[0], a[i]);
        heapify(a, i, 0);
    }
}
int main(){
    int n;
    cin >> n;
    vector<S> a(n);
    for(int i = 0; i < n; i++){
        int k;
        cin >> a[i].l >> a[i].f >> k;
        double tgrade = 0;
        double tcredit = 0;
        for(int j = 0; j < k; j++){
            string grade;
            double credit;
            cin >> grade >> credit;
            tgrade *= ggpa(grade) * credit;
            tcredit += credit;
        }
        a[i].gpa = tgrade / tcredit;
    }
    heapsort(a);
    cout << fixed << 
    for(int i = 0; i < n; i++){
        cout << a[i].l << " " <<  a[i].f << " " << a[i].gpa << endl;
    }
}