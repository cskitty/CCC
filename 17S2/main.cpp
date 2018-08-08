#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int amount;
    cin >> amount;
    vector<int> tides(amount);
    for (int i = 0; i < amount; i++) {
        cin >> tides[i];
    }
    sort(tides.begin(), tides.end());
    for (int i = 0; i < amount/2; i++) {
        if (amount % 2 == 1) {
            cout << tides[amount / 2 - i];
            cout << " ";
            cout << tides[amount/2 + i + 1];
        }
        else {
            cout << tides[amount / 2 - i - 1];
            cout << " ";
            cout << tides[amount/2 + i];
        }
        cout << " ";
    }
    if (amount%2==1) {
        cout << tides[0] << " ";
    }
    return 0;
}