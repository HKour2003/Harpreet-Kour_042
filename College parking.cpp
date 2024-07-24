#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <string>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
#include <unordered_map>

using namespace std;
const int max1 = 100; 
const int max2 = 100; 

int main() {
    int R, C;
    cin >> R >> C;

    int pk[max1][max2];

    for (int i = 0; i < R; ++i) {
        for (int j = 0; j < C; ++j) {
            cin >> pk[i][j];
        }
    }

    int mfull = 0;
    int mindex = 0;

    for (int i = 0; i < R; ++i) {
        int count = 0;
        for (int j = 0; j < C; ++j) {
            if (pk[i][j] == 1) {
                ++count;
            }
        }
        if (count> mfull) {
            mfull = count;
            mindex = i;
        }
    }

    cout << (mindex + 1) << endl;
    return 0;
}
