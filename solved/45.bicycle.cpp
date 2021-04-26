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
    int n,m,a[51],b;
    cin>>n;
    FOR(i,n){
        cin>>a[i];
    }
    cin>>m;
    int max_ratio=INT_MIN,ans=0,ratio;
    FOR(i,m){
        cin>>b;
        FOR(i,n){
            ratio = b/a[i];
            if(b%a[i]==0 && ratio>max_ratio){
                max_ratio = ratio;
                ans=1;
            }
            else if(b%a[i]==0 && ratio==max_ratio){
                ans++;
            }
        }
    }
    cout<<ans;
}