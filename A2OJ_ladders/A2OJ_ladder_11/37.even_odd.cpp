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
    ll n,k;
    cin>>n>>k;
    if(k<=(n+1)/2){
        cout<<(k*2 - 1);
    }
    else{
        cout<<((k-(n+1)/2)*2);
    }
    
}

/* TIME LIMIT EXCEEDED

    for(int i=1; i<=n; i= i +2){
        k--;
        if(k==0){
            cout<<i;
            return 0;
        }
    }
    for(int i=2; i<=n; i= i +2){
        k--;
        if(k==0){
            cout<<i;
            return 0;
        }
    }

*/