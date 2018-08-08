#include <iostream>
#include <vector>

using namespace std;

int main() {
    int length;
    char ex;
    scanf("%d\n", &length);
    vector<char> day1(length), day2(length);
    for (int i = 0; i < length; i++) {
        scanf("%c", &day1[i]);
    }
    scanf("%c", &ex);
    for (int i = 0; i < length; i++) {
        scanf("%c", &day2[i]);
    }

    int count=0;
    for (int i = 0; i < length; i++) {
        if (day1[i] == day2[i] and day1[i] == 'C') {
            count++;
        }
    }
    printf("%d", count);
    return 0;
}