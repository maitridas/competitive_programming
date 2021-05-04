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
    int n,k,val;
    vi h;
    cin>>n>>k;
    FOR(i,n){
        cin>>val;
        h.pb(val);
    }
    int minv=INT_MAX,ind=1,sum=0;
    FORE(i,1,n-1){
        h[i] = h[i] + h[i-1];
    }
    FOR(i,n-k){
        sum = h[k+i] - h[i];
        if(sum<minv){
            minv=sum;
            ind=i+2;
        }
    }
    if(h[k-1]<=minv){
        ind = 1;
    }
    cout<<ind;
}