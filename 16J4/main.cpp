#include <iostream>

using namespace std;

int main() {
    int hrs, mins;
    scanf("%d:%d", &hrs, &mins);
    mins += hrs*60;
    int amountLeft = 2*60, time = 0;
    if (mins >= (5*60)+20 && mins <= (6*60) + 40) {
        int diff = 7*60 - mins;
        time += diff;
        amountLeft -= diff;
        amountLeft *= 2;
        time += amountLeft;
        amountLeft /= 2;
        if (amountLeft > 90) {
            time -= amountLeft-90;
        }
    }
    else if (mins >= 7*60 && mins <= (9*60) + 40) {
        int diff = 10*60 - mins;
        time += diff;
        amountLeft *= 2;
        amountLeft -= diff;
        time += amountLeft/2;
    }
    else if (mins >= 10*60 && mins <= 13*60) {
        time += amountLeft;
    }
    else if (mins >= (13*60)+20 && mins <= (14*60) + 40) {
        int diff = 15*60 - mins;
        time += diff;
        amountLeft -= diff;
        amountLeft *= 2;
        time += amountLeft;
    }
    else if (mins >= 15*60 && mins <= (18*60) + 40) {
        int diff = 19*60 - mins;
        time += diff;
        amountLeft *= 2;
        amountLeft -= diff;
        time += amountLeft/2;
    }
    else {
        time += amountLeft;
    }
    mins += time;
    hrs = (mins/60)%24;
    mins = mins%60;
    printf("%02d:%02d", hrs, mins);
}