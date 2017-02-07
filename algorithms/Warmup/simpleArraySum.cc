#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

int main () {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int size;
    int temp, sum;

    cin >> size;

    for (int i = 0; i < size; ++i) {
        cin >> temp;
        sum += temp;
    }

    cout << sum;

    return 0;
}
