
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
int main() {
      int size,i;
      cin>>size;
      int arr[size];
    for (i=0; i<size; i++){
        cin>>arr[i];
    }
    int target;
    cin>>target;
    for(i=0; i<size; i++){
        if (arr[i]>=target)
            break;
    }
    cout<<i;
    return 0;
}
