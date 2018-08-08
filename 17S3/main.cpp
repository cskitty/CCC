#include <iostream>
#include <vector>
#include <set>
#include <algorithm>
#include <map>

using namespace std;
set<int> boards;
map<int, int> dictionary;

void boardFind(map<int, int> &buckets) {
    for (auto it = buckets.begin(); it != buckets.end(); it++) {
        //cout << it->first << " " << it->second << endl;
        if (buckets.count(1740 - it->first) > 0) {
            cout << "SILLYM: " << it->first <<" " << 1740 - it->first << endl;
        }
    }

    vector<int> lengths(buckets.size());
    for (auto it = buckets.begin(); it!=buckets.end(); it++) {
        lengths.push_back(it->first);
    }

    for (int i = 0; i< buckets.size(); i++) {
        for(int j= i; j< buckets.size(); j++) {
            if (i == j){
                dictionary.insert(make_pair(lengths[i] + lengths[j], buckets[lengths[i]] / 2));
            }
            else {
                if (dictionary.count(lengths[i]+lengths[j]) > 0) {
                    dictionary[lengths[i]+lengths[j]] += min(buckets[lengths[i]], buckets[lengths[j]]);
                }
                else {
                    dictionary.insert(make_pair(lengths[i]+lengths[j], min(buckets[lengths[i]], buckets[lengths[j]])));
                }
            }
        }
    }

    int one=-1, two=0;
    for(auto it = dictionary.begin(); it!=dictionary.end();it++) {
        if(it->second > one) {
            one = it->second;
            two = 1;
        }
        else if (it->second == one) {
            two++;
        }
    }
    //cout << "\n" << "This is meow dictionary " << endl;
   // for (auto it = dictionary.begin(); it != dictionary.end(); it++) {
       // cout << it->first << " " << it->second << endl;
  //  }
   //cout << "OUTPUT\n";
    cout << one << " " << two << " ";
}

int main() {
    int amount;
    cin >> amount;
    map<int, int> buckets;
    for (int i = 0; i < amount; i++) {
        int temp;
        cin >> temp;
        if (buckets.count(temp) == 0) {
            buckets.insert(make_pair(temp, 1));
        }
        else {
            buckets[temp]++;
        }
    }
    boardFind(buckets);
}