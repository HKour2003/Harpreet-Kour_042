
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
  int t;
    cin>>t;
  
        for (int i=0;i<t;i++){
            int costG,costP;
            cin>>costG>>costP;
            int n;
                int c1=0,c2=0;
    cin>>n;
    for(int j=0;j<n;j++){
        int p1,p2;
        cin>>p1>>p2;
        if(p1==1)
            c1++;
        if(p2==1)
            c2++;
    }
            int cost1= c1*costG+c2*costP;
            int cost2= c1*costP+c2*costG;
            if(cost1<cost2)
                cout<<cost1<<endl;
            else
                cout<<cost2<<endl;
}
    return 0;
}
