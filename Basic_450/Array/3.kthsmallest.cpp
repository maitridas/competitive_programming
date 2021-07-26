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
    vector<int> arr;
    int n,k;
    cin>>n>>k;
    for(int i =0; i<n; ++i){
        int val;
        cin>>val;
        arr.push_back(val);
    }
    set<int> s(arr.begin(),arr.end());
    set<int>::iterator itr = s.begin();
    advance(itr, k-1);
    cout<<*itr<<endl;
}