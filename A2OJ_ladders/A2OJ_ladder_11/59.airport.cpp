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
    int n,m, a[1001] = {0}, b[1001] = {0};
    cin>>n>>m;
    FOR(i,m){
        cin>>a[i];
        b[i] = a[i];
    }
    int max=0,min =0,in,am;
    am=m;
    FOR(i,n){
        in = distance(a, max_element(a, a + m));
        max += a[in];
        a[in] =a[in] - 1;
        in = distance(b, min_element(b, b + am));
        min += b[in];
        b[in] =b[in] - 1;
        if(b[in]==0){
            remove(begin(b),end(b),0);
            am--;
        }

        if(a[in]==0){
            remove(begin(a),end(a),0);
            m--;
        }
    }
    cout<<max<<" "<<min;
}