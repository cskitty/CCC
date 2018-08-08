#include <iostream>
#include <vector>

using namespace std;

void split_99(vector<int> &streams, int one, int two) {
    streams.insert(streams.begin()+one, streams[one]*two/100);
    streams[one+1] -= streams[one];
}

void merge_88(vector<int> &streams, int one) {
    streams[one] += streams[one+1];
    streams.erase(streams.begin() + (one + 1));
}


int main() {
    /*int x = 0;
    while (x != 77) {
        cin >> x;
        printf("%d\n",x);
    }*/
    int streamAmount;
    cin >> streamAmount;
    vector<int> streams(1000);
    for (int i = 0; i < streamAmount; i++) {
        cin >> streams[i];
    }

    int current;
    cin >> current;
    int commands = 0;
    while (current != 77) {
        commands += 1;
        if (current == 99) {
            int one, two;
            cin >> one;
            cin >> two;
            split_99(streams, one - 1, two);

        } else if (current == 88) {
            int one;
            cin >> one;

            merge_88(streams, one - 1);
        }
        cin >> current;
    }

        for (int i = 0; i < streamAmount; i++) {
            printf("%d ", streams[i]);
        }
            return 0;

    }
