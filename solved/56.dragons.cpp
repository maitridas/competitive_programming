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

struct dragon{
    int x,y;
};

bool comp(dragon a, dragon b){
    return (a.x<b.x);
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    ll s;
    int n;
    dragon dragons[1001];
    cin>>s>>n;
    FOR(i,n){
        cin>>dragons[i].x>>dragons[i].y;
    }
    sort(dragons, dragons+n, comp);
    FOR(i,n){
        if(s>dragons[i].x){
            s += dragons[i].y;
        }
        else{
            cout<<"NO";
            return 0;
        }
    }
    cout<<"YES";
}