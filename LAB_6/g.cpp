
#include <iostream>
#include <map>
#include <string>
using namespace std;

int main() {
    int n;
    cin >> n;

    map<string, string> curr;

    for(int i = 0; i < n; i++) {
        string oldName, newName;
        cin >> oldName >> newName;

        bool found = false;

        for (auto& user : curr) {
            if (user.second == oldName) {
                user.second = newName;
                found = true;
                break;
            }
        }

        if(!found){
            curr[oldName] = newName;
        }
    }

    cout << curr.size() << endl;

    for (auto& user : curr) {
        cout << user.first << " " << user.second << endl;
    }

    return 0;
}
