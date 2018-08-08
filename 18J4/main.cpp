#include <iostream>
#include <vector>
#include <bits/stdc++.h>


using namespace std;

bool not_valid(vector<vector<int> > &flowersVect, int flowersAmount) {
    bool tf = false;
    for (int i = 0; i < flowersAmount; i++) {

        for (int j = 0; j < flowersAmount-1; j++) {
            if (flowersVect[i][j] > flowersVect[i][j + 1]) {
                tf = true;
            }
            if (i != flowersAmount-1) {
                if (flowersVect[i][j] > flowersVect[i + 1][j]) {
                    tf = true;
                }
            }
        }


    }
    return tf;
}

void rotate90degrees(vector<vector<int> > &flowersVect, int flowersAmount) {
    vector<vector<int> > vect;
    vect.resize(flowersAmount, vector<int>(flowersAmount, 0));
    vect = flowersVect;
    int t = flowersAmount - 1;
    for (int i = 0; i<flowersAmount; i++) {
        for (int j = 0; j<flowersAmount; j++) {
            flowersVect[t-j][i] = vect[i][j];
        }
    }
}


int main() {
    cin.tie(0);
    cin.sync_with_stdio(0);
    int flowersAmount;
    /*string line;

    getline(cin, line);
    istringstream iss(line);
    iss >> flowersAmount;
*/
    //scanf("%d", &flowersAmount);
    cin >> flowersAmount;
    vector<vector<int> > flowersVect;
    flowersVect.resize(flowersAmount, vector<int>(flowersAmount, 0));

    for (int i = 0; i < flowersAmount; i++) {
        /*getline(cin, line);
        istringstream iss1(line);*/
        for (int j = 0; j < flowersAmount; j++) {
            cin >> flowersVect[i][j];
            //scanf("%d", &flowersVect[i][j]);
            //iss1 >> flowersVect[i][j];
        }
    }
    bool tf = not_valid(flowersVect, flowersAmount);
    while(tf == true) {
        rotate90degrees(flowersVect, flowersAmount);
        tf = not_valid(flowersVect, flowersAmount);
    }
    for (int i = 0; i < flowersAmount; i++) {
        for (int j = 0; j < flowersAmount; j++) {
            printf("%d ", flowersVect[i][j]);
        }
        printf("\n");
    }
    return 0;
}