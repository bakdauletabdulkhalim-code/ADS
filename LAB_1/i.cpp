#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    vector<int> a(t);
    for(int i = 0; i < t; i++) {
        cin >> a[i];
    }
    for(int i = 0; i < t; i++) {
        int n = a[i];
        deque<int> deck;
        for (int card = n; card >= 1; card--){

            deck.push_front(card);

            int k = card % deck.size();

            for(int j = 0; j < k; j++) {
                deck.push_front(deck.back());
                deck.pop_back();
            }
        }

        for(int j = 0; j < n; j++) {
            cout << deck[j] << " ";
        }
        cout << endl;
    }

    return 0;
}