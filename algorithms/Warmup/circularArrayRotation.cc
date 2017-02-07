#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n, k, q;
    vector<int> list;
    
    cin >> n >> k >> q;
    cin.clear ();

    k = k % n;
    
    for (int i = 0; i < n; i++) {
        int temp;
        cin >> temp;
        list.push_back (temp);
    }
    cin.clear ();
    
    for (int i = 0; i < q; i++) {
        int temp;
        cin >> temp;
        cin.clear ();
        
        cout << list[(temp < k ? temp + n - k: temp - k)] << endl;
    }
    
    return 0;
}

