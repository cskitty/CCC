#include <iostream>

using namespace std;

int main() {
    int money, slotOne, slotTwo, slotThree;
    cin >> money >> slotOne >> slotTwo >> slotThree;

    printf("money = %d, slotOne = %d, slotTwo = %d, slotThree = %d\n", money, slotOne, slotTwo, slotThree);
    int count = 0;
    while (money > 0) {
        if (count % 3 == 0) {
            if ((slotOne + 1) % 35 == 0) {
                money += 30;
            }

            money -= 1;
            slotOne += 1;
        }

        else if (count % 3 == 1) {
            if ((slotTwo + 1) % 100 == 0) {
                money += 60;
            }
            money -= 1;
            slotTwo += 1;
            }


        else if (count % 3 == 2) {
            if ((slotThree + 1) % 10 == 0) {
                money += 9;
            }
            money -= 1;
            slotThree += 1;
        }
    count += 1;
    }
    printf("Martha plays %d times before going broke.", count);
    return 0;
}