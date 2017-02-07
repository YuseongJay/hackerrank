#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

int main () {
    /* Enter your code here. Read input from STDIN. Print outpuut to STDOUT */
    int row, temp;
    int value1 = 0;
    int value2 = 0;
    
    cin >> row;
    cin.clear ();

    for (int i = 0; i < row; i++) {
        for (int j = 0; j < row; j++) {
            cin >> temp;

            if (j == i) {
                value1 += temp;
            }
            if (j == row-i-1) {
                value2 += temp;
            }
        }
        cin.clear ();
    }

    cout << ((value1 > value2) ? value1 - value2 : value2 - value1);

    return 0;
}
