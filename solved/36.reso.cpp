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
    int n,a,b,diff,min_a,min_b,min = INT_MAX,first;
    cin>>n;
    cin>>a;
    first = a;
    FOR(i,n-1){
        cin>>b;
        diff = abs(b-a);
        a= b;
        if(diff<min){
            min = diff;
            min_a = i+1;
            min_b = i+2;
        }
    }
    diff = abs(first - b);
    if(diff<min){
        min = diff;
        min_a = 1;
        min_b = n;
    }
    cout<<min_a<<" "<<min_b;
}