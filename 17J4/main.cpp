#include <iostream>

using namespace std;

int favoriteTimes(int time) {
    int giantArray[] = {111, 123, 135, 147, 159, 210, 222, 234, 246, 258,
                      321, 333, 345, 357, 420, 432, 444, 456, 531, 543, 555,
                      630, 642, 654, 741, 753, 840, 852, 951, 1111};
    int num;
    if (time > 60) {
        int x = time/60;
        int y = time%60;
        num = (12 + x)*100 + y;
    }
    else {
        num = 1200 + time;
    }
    int total = time/720*(sizeof(giantArray)/sizeof(int)+1);
    num = num % 1200;
    if (time < 60 && time >= 34) {
        total++;
        return total;
    }
    if (time > 34) {
        total++;
    }
    int i = 0;
    while (giantArray[i] <= num) {
        total++;
        i++;
    }
    return total;
}


int main() {
    int passed;
    cin >> passed;
    int amount = favoriteTimes(passed);
    cout << amount;
    return 0;
}