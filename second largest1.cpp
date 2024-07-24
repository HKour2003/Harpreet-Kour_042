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
using namespace std;
int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
  
   char comma;
    int a, b, c;
    cin>>a>>comma>>b>>comma>>c;


    int secondLargest;
    if ((a >= b && a <= c) || (a <= b && a >= c))
        secondLargest = a;
    else if ((b >= a && b <= c) || (b <= a && b >= c))
        secondLargest = b;
    else
        secondLargest = c;

    cout  << secondLargest << endl;

    return 0;
}
