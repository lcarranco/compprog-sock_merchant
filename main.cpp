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

    
    return 0;
}