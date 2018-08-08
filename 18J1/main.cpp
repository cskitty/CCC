#include <iostream>

using namespace std;

int main() {
    int number[4];
    cin >> number[0] >> number[1] >> number[2] >> number[3];
    bool telemarketer = true;
    if (number[0] != 9 and number[0] != 8) {
        telemarketer = false;
    }
    if (number[1] != number[2]) {
        telemarketer = false;
    }
    if (number[3] != 8 and number[3] != 9) {
        telemarketer = false;
    }

    if (telemarketer == false) {
        printf("answer");
    }
    else {
        printf("ignore");
    }
    return 0;
}