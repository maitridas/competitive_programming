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
#include <unordered_map>

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

const string subseqs[] = {"00", "25", "50", "75"};

int solve(string s, string t){
    int n = s.length()-1;
    int ans=0;
    while(n>=0 && s[n]!=t[1]){
        n--;
        ans++;
    }
    if(n<0){
        return INT_MAX;
    }
    n--;
    while(n>=0 && s[n]!=t[0]){
        n--;
        ans++;
    }
    if(n<0){
        return INT_MAX;
    }
    return ans;
}

int main() {
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int t;
    cin>>t;
    string s;
    FOR(i,t){
        cin>>s;
        int ans = INT_MAX;
        for(auto t:subseqs){
            ans = min(ans, solve(s,t));
        }
        cout<<ans<<endl;
    }
}