#include <iostream>
#include <vector>
#include <list>

using namespace std;
int total = 0;


vector<int> minPages;
vector<vector<int> > jumpTable;
list<int> visitedPages;

int recursive(int currentPage) {
    if (alreadyRead[currentPage - 1] == 0) {


        if (jumpTable[currentPage - 1][0] == 0) {
            minPages[currentPage - 1] = 1;
        }
        else {
            int least = total;
            for (unsigned int i = 0; i < jumpTable[currentPage - 1].size(); i++) {
                int x = recursive(jumpTable[currentPage - 1][i]);
                if (x < least) {
                    least = x;
                }
            }
            minPages[currentPage - 1] = least + 1;
        }
    }

    return minPages[currentPage - 1];
}

int main() {
    cin >> total;
    alreadyRead.resize(total);
    minPages.resize(total);
    jumpTable.resize(total);

    for(int i = 0; i< total; i++) {
        alreadyRead[i] = 0;
        minPages[i] = total + 1;
    }

    for (int i = 0; i < total; i++) {
        int choices;
        cin >> choices;
        if (choices == 0) {
            jumpTable[i].resize(1);
            jumpTable[i][0] = 0;
        }
        else {
            jumpTable[i].resize(choices);
            for (int j = 0; j < choices; j++) {
                cin >> jumpTable[i][j];
            }
        }
    }

    int x = recursive(1);
    char page = 'Y';
    for (int i = 0; i < total; i++) {
        if (alreadyRead[i] == 0) {
            page = 'N';
        }
    }
    printf("%c\n%d", page, x);

}