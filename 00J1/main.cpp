#include <stdio.h>

using namespace std;

int main(void) {
    int firstDay, numOfDays;
    scanf("%d %d", &firstDay, &numOfDays);
    printf("Sun Mon Tue Wed Thr Fri Sat\n");
    bool marker = false;
    for (int i = 1; i < numOfDays + firstDay; i++) {
        if (i == 1) {
            if (i < firstDay) {
                printf("   ");
            } else {
                printf("  %d", i);
            }
        } else if (i < firstDay) {
            printf("    ");
        } else if ((i - firstDay + 1) % 7 == (8 - firstDay) % 7) {
            if (i - firstDay + 1 < 10) {
                printf("   ");
            } else if (i - firstDay + 1 >= 10) {
                printf("  ");
            }
            printf("%d\n", i - firstDay + 1);
            marker = true;
        } else if (marker == true) {
            if (i - firstDay + 1 < 10) {
                printf("  ");
            } else if (i - firstDay + 1 >= 10) {
                printf(" ");
            }
            marker = false;
            printf("%d", i - firstDay + 1);
        } else if (i - firstDay + 1 < 10) {
            printf("   %d", i - firstDay + 1);
        } else if (i - firstDay + 1 >= 10) {
            printf("  %d", i - firstDay + 1);
        }
    }
    if (firstDay != 1) {
    printf("\n");
}
    return 0;
}