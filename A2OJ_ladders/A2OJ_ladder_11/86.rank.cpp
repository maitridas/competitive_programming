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

bool my_comp(pii a,pii b){
    if(a.first == b.first){
        return (a.second<b.second);
    }
    else{
        return (a.first>b.first);
    }
}

int main() {
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    vv<pii> v;
    int n,k;
    cin>>n>>k;
    int p,t;
    FOR(i,n){
        cin>>p>>t;
        v.pb({p,t});
    }
    sort(v.begin(),v.end(),my_comp);
    int ans=1;
    FORE(i,k,v.size()-1){
        if(v[k-1].first==v[i].first && v[k-1].second==v[i].second ){
            ans++;
        }
        else{
            break;
        }
    }
    for(int i = k-2; i>=0; i--){
        if(v[k-1].first==v[i].first && v[k-1].second==v[i].second ){
            ans++;
        }
        else{
            break;
        }
    }
    cout<<ans;
}