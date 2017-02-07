#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

int main () {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT. */
    
    int a[3];
    int b[3];

    int score_a, score_b = 0;

    cin >> a[0] >> a[1] >> a[2];
    cin.clear ();
    cin >> b[0] >> b[1] >> b[2];

    for (int i = 0; i < 3; ++i) {
        if (a[i] > b[i]) {
            score_a += 1;
        } else if (a[i] > b[i]) {
            score_b += 1;
        }
    }

    cout << score_a << " " << score_b;

    return 0;
}
