#include <iostream>

using namespace std;

int main() {
    int sum = 0, org, times;
    cin >> org >> times;
    int add = org;
    for (int i = 0; i < times+1; i++) {
        sum += add;
        add *= 10;

    }
    cout << sum;
}