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
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    int n,m;
    cin>>n>>m;
    int flag =1;
    if(n<m){
        flag =0;
    }
    int b=n,g=m;
    FOR(i,n+m){
        if(flag==1 && b!=0){
            cout<<"B";
            b--;
            if(g!=0) flag=0;
        }
        else if(flag==0 && g!=0){
            cout<<"G";
            if(b!=0) flag=1;
            g--;
        }
    }
}