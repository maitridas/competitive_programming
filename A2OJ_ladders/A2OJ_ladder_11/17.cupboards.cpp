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
    int n,l,r,num_l=0,num_r=0;
    cin>>n;
    for(int i=0; i<n; ++i){
        cin>>l>>r;
        if(l==1){
            num_l++;
        }
        if(r==1){
            num_r++;
        }
    }
    int min_secs=0;
    if(num_l>=(n-num_l)){
        min_secs += (n-num_l);
    }
    else{
        min_secs += num_l;
    }

    if(num_r>=(n-num_r)){
        min_secs += (n-num_r);
    }
    else{
        min_secs += num_r;
    }

    cout<<min_secs;
}