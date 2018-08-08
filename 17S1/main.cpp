#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> swift(n), sema(n);
    for (int i = 0; i < n; i++) {
        cin >> swift[i];
    }
    for (int i = 0; i < n; i++) {
        cin >> sema[i];
    }
    int swifts=0, semas=0, k=0;
    for (int i = 0; i < n; i++) {
        swifts += swift[i];
        semas += sema[i];
        if (swifts == semas) {
            k = i+1;
        }
    }
    cout << k;
    return 0;
}