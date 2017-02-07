#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    
    int size, temp;
    long sum;

    cin >> size;
    cin.clear ();
    for (int i = 0; i < size; ++i) {
        cin >> temp;
        sum += long(temp);
    }

    cout << sum;
    
    return 0;
}
