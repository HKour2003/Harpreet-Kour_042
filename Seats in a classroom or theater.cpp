
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
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
  int fact(int n){
    int x=1;
    for (int i=1;i<=n; ++i){
        x=x*i;}
        return x;
    
}

   
    
    int main(){
    int r;
    int n;
    cin>>r;
    cin>>n;
        if(n<r){
         cout<<"Cannot adjust n people on r seats";

    }
    else{
        
    int res=fact(n)/fact(n-r);
    cout<<res;
    
    }
        
    
    return 0;}
