#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    queue<int> boris, nursik;

    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        boris.push(x);
    }

    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        nursik.push(x);
    }

    int moves = 0;

    while (!boris.empty() && !nursik.empty()) {

        int b = boris.front();
        boris.pop();

        int n = nursik.front();
        nursik.pop();

        moves++;
        bool bWin;

        if (b == 0 && n == 9)
            bWin = true;
        else if (b == 9 && n == 0)
            bWin = false;
        else
            bWin = b > n;

        if (bWin) {
            boris.push(b);
            boris.push(n);
        }
        else {
            nursik.push(b);
            nursik.push(n);
        }
    }

    if (boris.empty())
        cout << "Nursik " << moves;
    else
        cout << "Boris " << moves;

    return 0;
}