#include <iostream>

using namespace std;

int main() {
    int x1, y1, x2, y2, gas;
    cin >> x1 >> y1 >> x2 >> y2 >> gas;
    int distance = abs(x1 - x2) + abs(y1 - y2);
    if (gas - distance < 0) {
        printf("N");
    }
    else if ((gas - distance) % 2 == 0) {
        printf("Y");
    }
    else {
        printf("N");
    }
    return 0;
}