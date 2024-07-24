
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
    int main() {
    int N;
    cin >> N;

    int player1_cumulative = 0, player2_cumulative = 0;
    int max_lead = 0, leader = 0;

    for (int i = 0; i < N; ++i) {
        int Si, Ti;
        cin >> Si >> Ti;

        player1_cumulative += Si;
        player2_cumulative += Ti;

        int current_lead = abs(player1_cumulative - player2_cumulative);
        if (player1_cumulative > player2_cumulative) {
            if (current_lead > max_lead) {
                max_lead = current_lead;
                leader = 1;
            }
        } else {
            if (current_lead > max_lead) {
                max_lead = current_lead;
                leader = 2;
            }
        }
    }

    cout << leader << " " << max_lead << endl;
    return 0;
}
