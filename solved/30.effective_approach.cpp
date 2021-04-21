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
    int n,m,a[100001],b,count=0; ll pet=0,vas=0;
    cin>>n;
    FOR(i,n){
        cin>>b;
        a[b] = i+1;
    }
    cin>>m;
    FOR(i,m){
        cin>>b;
        pet += a[b];
        vas += n - a[b] + 1;
    }
    cout<<pet<<" "<<vas;
}

/* TIME LIMIT EXCEEDED
for(int i=0; i<m; ++i){
        cin>>b;
        count =0;
        for(int j=0; j<n; ++j){
            count++;
            if(a[j]==b){
                break;
            }
        }
        pet = pet + count;
        vas=vas + n-count+1;
    }
    cout<<pet<<" "<<vas;

*/