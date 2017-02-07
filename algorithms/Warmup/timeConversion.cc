#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    
    char* time = new char[10];
    
    scanf ("%10s", time);    

    if (time[8] == 65) {
        if (time[0] == 49 && time[1] == 50)
            time[0] = time[1] = 48;
    } else if (time[8] == 80) {
        time[0] += 1;
        if (time[1] >= 56) {
            time[1] -= 8;
            time[0] += 1;
        } else {
            time[1] += 2;
        }
    }
    time[8] = 0;
    cout << time << endl;
    
    return 0;
}
