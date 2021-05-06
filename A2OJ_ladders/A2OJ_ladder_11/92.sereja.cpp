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
    int a[100005],c[100005] ={0},ans[100005];
    int n,m,sum=0,l;
    cin>>n>>m;
    FOR(i,n){
        cin>>a[i];
        c[a[i]] =1;
    }
    for(int i=n-1;i>=0;--i){
        if(c[a[i]]==1){
            sum++;
            c[a[i]]=0;
        }
        ans[i] = sum;
    }
    FOR(i,m){
        cin>>l;
        cout<<ans[l-1]<<endl;
    }
}
/*
Getting TLE
vi a;
    set<int> s;
    int n,m,l,c;
    int val;
    cin>>n>>m;
    FOR(i,n){
        cin>>val;
        a.pb(val);
        s.insert(val);
    }
    c = s.size();
    FOR(i,m){
        cin>>l;
        s.clear();
        if(l==1){
            cout<<c<<endl;
            continue;
        }
        FORE(j,l-1,n-1){
            s.insert(a[j]);
        }
        cout<<s.size()<<endl;
    }
*/