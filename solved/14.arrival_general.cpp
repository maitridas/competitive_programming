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

#define FOR(i,n) for(int i=0;i<n;i++)
#define FORE(i,a,b) for(int i=a;i<=b;i++)
#define ll long long int
#define vi vector<int>
#define ii pair<int,int>
#define pb push_back
#define mp make_pair
#define ff first
#define ss second
#define pll pair<ll,ll>
#define cd complex<double> 
#define vv vector

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int min_elem_index=0,max_elem_index=0,min_elem,max_elem,n,arr[100];
    cin>>n;
    cin>>arr[0];
    min_elem=arr[0];
    max_elem=arr[0];
    for(int i =1; i<n; ++i){
        cin>>arr[i];
        if(arr[i]>max_elem){
            max_elem = arr[i];
            max_elem_index = i;
        }
        if(arr[i]<=min_elem){
            min_elem = arr[i];
            min_elem_index = i;
        }
    }
    int secs;
    secs = max_elem_index + n -1 - min_elem_index;
    if(max_elem_index>min_elem_index){
        secs = secs -1;
    }
    cout<<secs;
}