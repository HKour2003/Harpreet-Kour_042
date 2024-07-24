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
    int n;
        cin>>n;
    if(n%2==0){
      if(2<=n&&n<=5){
        cout<<"Not Weird";
      }
    else if(6<=n&&n<=20){
        cout<<"Weird";
    }
        else if(n>20)
        {
        cout<<"Not Weird";
    }
    }
    else {
        cout<<"Weird";
    }
}
