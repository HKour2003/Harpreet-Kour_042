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
    int i=1;
    int n1=0;
    int n;
    cin >> n;
    while (n > 0) {
        int digits = n % 10;  
        if(digits%2==1){
            n1=n1+digits*i;
            i=i*10;
        }  
        n = n / 10; 
    } 
    cout<<n1;
return 0;
}

    
