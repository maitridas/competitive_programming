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
    int n,x[201],y[201],a=0,u,d,l,r;
    cin>>n;
    FOR(i,n) cin>>x[i]>>y[i];
    FOR(i,n){
        u=l=d=r=0;
        FOR(j,n){
            if(x[j]>x[i] && y[j]==y[i]) u=1;
            else if(x[j]<x[i] && y[j]==y[i]) d=1;
            else if(x[j]==x[i] && y[j]>y[i]) l=1;
            else if(x[j]==x[i] && y[j]<y[i]) r=1;
        }
        if(u&&d&&l&&r){
            a++;
        }
    }
    cout<<a;
}