#include <iostream>
#include <vector>
#include <array>

using namespace std;

vector<int> read_ints(int n) {
    vector<int> ints;
    int value = 0;
    for (int i = 0; i < n; ++i) {
        cin >> value;
        ints.push_back(value);
        // cout << ints[i] << ' ';
    }
    return ints;
}

int main() {
    int n = 0;
    cin >> n;
    // cout << n << endl;

    vector<int> ints = read_ints(n);

    array<int, 99> colors;
    colors.fill(0);
    // for (int i = 0; i < colors.size(); ++i) {
    //     cout << colors[i] << ' ';
    // }

    for (vector<int>::iterator it = ints.begin(); it != ints.end(); ++it) {
        colors[*it - 1]++;
    }
    // cout << "The number of occurences of 10 is: " << colors[9] << endl;
    // for (int i = 0; i < colors.size(); ++i) {
    //     if (colors[i] != 0) {
    //         cout << "index: " << i <<  " occurences is: " << colors[i] << endl;
    //     }
    // }


    vector<int> pairs;
    for (int i = 0; i < colors.size(); ++i) {
        if (colors[i] != 0) {
            pairs.push_back(colors[i] / 2);
        }
    }
    // for (vector<int>::iterator it = pairs.begin(); it != pairs.end(); ++it) {
    //     cout << *it << ' ';
    // }

    int totalPairs = 0;
    for (vector<int>::iterator it = pairs.begin(); it != pairs.end(); ++it) {
        totalPairs += *it;
    }
    cout << totalPairs;


    
    return 0;
}