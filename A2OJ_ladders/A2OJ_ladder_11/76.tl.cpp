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
#define imx INT_MAX
#define imn INT_MIN
#define lmx LLONG_MAX
#define lmn LLONG_MIN

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int n,m,a,minr=imx,maxr=imn,minw=imx;
    cin>>n>>m;
    FOR(i,n){
        cin>>a;
        minr = min(minr,a);
        maxr = max(maxr,a);
    }
    FOR(i,m){
        cin>>a;
        minw = min(minw,a);
    }
    if(minw==maxr){
        cout<<-1;
        return 0;
    }
    else{
        FORE(i,maxr,minw-1){
            if((2*minr)<=i){
                cout<<i;
                return 0;
            }
        }
        
    }
    cout<<-1;
}
/*
Without any loop better solution
Let's v = min(ai), p = max(ai), c = min(bi). So, if max(2 * v, p) < c, then answer is max(2 * v, p), else answer is  - 1.
*/