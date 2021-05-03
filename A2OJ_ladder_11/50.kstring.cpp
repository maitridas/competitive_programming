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
    int k;
    cin>>k;
    string s;
    cin>>s;
    ll count[26] = {0};
    FOR(i,s.length()){
        count[s[i]-'a']++;
    }
    string ks;
    int temp;
    char ch;
    FOR(i,26){
        if(count[i]%k !=0){
            cout<<-1;
            return 0;
        }
        temp = count[i]/k;
        ch = 'a'+i;
        FOR(j,temp){
            ks.pb(ch);
        }
    }
    FOR(i,k){
        cout<<ks;
    }
}