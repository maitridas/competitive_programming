/********   All Required Header Files ********/
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <sstream>
#include <queue>
#include <deque>
#include <bitset>
#include <iterator>
#include <list>
#include <stack>
#include <map>
#include <set>
#include <functional>
#include <numeric>
#include <utility>
#include <limits>
#include <time.h>
#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <cstdlib>

using namespace std;

int main(){
    int n,val;
    cin>>n;
    vector<int> arr;
    for(int i=0; i<n; ++i){
        cin>>val;
        arr.push_back(val);
    }
    reverse(arr.begin(), arr.end());
    cout<<arr[0];
}