#include <iostream>

using namespace std;

int main() {
    int giantArray[] = {0, 1, 8, 11, 69, 88, 96,
                        101, 111, 181, 609, 619, 689, 808, 818, 888, 906, 916, 986,
                        1001, 1111, 1691, 1881, 1961, 6009, 6119, 6699, 6889, 6996,
                        8008, 8118, 8698, 8888, 8968, 9006, 9116, 9696, 9886, 9966,
                        10001, 11011, 11111, 11811, 16091, 16191, 16891, 18081, 18181, 18881, 19061, 19161, 19861};
    int m, n;
    cin >> m;
    cin >> n;
    int smallest=-1, biggest=-1;
    for (unsigned int i = 0; i <= sizeof(giantArray)/sizeof(int); i++) {
        if (giantArray[i] >= m && giantArray[i-1] < m) {
            smallest = i;
        }
        else if (giantArray[i] <= n and giantArray[i+1] > n) {
            biggest = i;
            break;
        }
    }
    if (smallest == -1 || biggest == -1) {
        printf("0");
    }
    else {
        printf("%d", biggest - smallest + 1);
    }
    return 0;
}