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
#define pii pair<int,int>
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
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int n;
    vv<ll> v,u;
    cin>>n;
    int val;
    FOR(i,n){
        cin>>val;
        v.pb(val);
        u.pb(val);
    }
    sort(u.begin(),u.end());
    FORE(i,1,n-1){
        v[i] = v[i] + v[i-1];
        u[i] = u[i] + u[i-1];
    }
    int m;
    cin>>m;
    int t,l,r;
    FOR(i,m){
        cin>>t>>l>>r;
        if(t==1){
            if(l==1) cout<<v[r-1]<<endl;
            else cout<<(v[r-1]-v[max(l-2,0)])<<endl;
        }
        else if(t==2){
            if(l==1) cout<<u[r-1]<<endl;
            else cout<<(u[r-1]-u[max(l-2,0)])<<endl;
        }
    }
}